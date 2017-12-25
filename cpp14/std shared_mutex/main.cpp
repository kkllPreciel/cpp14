#include <iostream>
#include <thread>
#include <shared_mutex>
#include <chrono>

std::mutex print_mtx;
void print_value(int x)
{
    std::lock_guard<std::mutex> lock(print_mtx);
    std::cout << x << std::endl;
}

class X {
    std::shared_mutex mtx_;
    int count_ = 0;
public:
    // �������ݑ��F�J�E���^�����Z����
    void writer()
    {
        std::lock_guard<std::shared_mutex> lock(mtx_);
        ++count_;
    }

    // �ǂݍ��ݑ��F�J�E���^�̒l��ǂ�
    void reader()
    {
        std::shared_lock<std::shared_mutex> lock(mtx_);
        print_value(count_);
    }
};

X obj;
void writer_thread()
{
    for (int i = 0; i < 3; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        obj.writer();
    }
}

void reader_thread()
{
    for (int i = 0; i < 10; ++i) {
        std::this_thread::sleep_for(std::chrono::microseconds(1));
        obj.reader();
    }
}

int main()
{
    // �������݃��[�U�[1�l
    // �ǂݍ��݃��[�U�[3�l
    std::thread writer1(writer_thread);
    std::thread reader1(reader_thread);
    std::thread reader2(reader_thread);
    std::thread reader3(reader_thread);

    writer1.join();
    reader1.join();
    reader2.join();
    reader3.join();

    return 0;
}
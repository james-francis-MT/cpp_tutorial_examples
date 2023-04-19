#include <string>

class Book{
    private:
    const std::string title;
    const int pages;
    int chapters;

    public:
    Book() : title("Diary"), pages(100) {
        chapters = 10;
    }
};
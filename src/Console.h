#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>
#include <vector>

using std::vector, std::tuple, std::string;

namespace Entry
{
    enum Type
    {
        standard,
        warning,
        error,
        userInput,
    };
}

struct EntryContainer
{
    string body;
    Entry::Type type;
};

class Console {
public:
    static Console* getInstance();

    void addEntry(EntryContainer);
    EntryContainer lastEntry();

protected:
    vector<EntryContainer> entryList;

private:
    static Console* inst_;
    Console() : entryList() {}
    Console(const Console&);
    Console& operator=(const Console&);
};


#endif //CONSOLE_H

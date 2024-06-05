#include "Console.h"

using std::string, std::tuple, std::vector;

Console* Console::inst_ = nullptr;

Console* Console::getInstance()
{
    if (inst_ == nullptr)
    {
        inst_ = new Console();
    }
    return(inst_);
}

void Console::addEntry(EntryContainer entry)
{
    entryList.push_back(entry);
}

EntryContainer Console::lastEntry()
{
    if (entryList.empty())
    {
        return {"Entry list is empty!", Entry::error};
    }

    return entryList.back();
}

#pragma once

namespace ErrorManager
{
    void ThrowError(const char* Message, bool Fatal, const char* FileName, int Line);
}

#ifndef THROW_ERROR
#define THROW_ERROR(Message) ErrorManager::ThrowError(Message, false, __FILE__, __LINE__);
#endif
#ifndef THROW_FATAL_ERROR
#define THROW_FATAL_ERROR(Message) ErrorManager::ThrowError(Message, true, __FILE__, __LINE__);
#endif
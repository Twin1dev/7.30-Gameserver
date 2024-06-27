#include "ErrorManager.h"

#include <Windows.h>

#include <string>
#include <format>

#include "loguru.hpp"

namespace ErrorManager
{
    void ThrowError(const char* Message, bool Fatal, const char* FileName, int Line)
    {
        std::string ErrorMessage;

        if (Fatal)
        {
            ErrorMessage = std::format("Fatal error occurred!\n{}\n{} -> {}", Message, FileName, Line);
        }
        else
        {
            ErrorMessage = std::format("Error occurred!\n{}\n{} -> {}", Message, FileName, Line);
        }

        LOG_F(ERROR, Message);
        MessageBoxA(NULL, ErrorMessage.c_str(), "Error!", MB_ICONERROR);

        if (Fatal)
        {
            std::exit(EXIT_FAILURE);
        }
    }
}
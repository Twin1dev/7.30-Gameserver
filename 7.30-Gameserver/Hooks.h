#pragma once

namespace Hooks
{
	void StartServer()
	{
		CREATEHOOK(BaseAddress() + 0x45c9d90, GetNetModeWorld, nullptr);

		MH_EnableHook(MH_ALL_HOOKS);
	}
}
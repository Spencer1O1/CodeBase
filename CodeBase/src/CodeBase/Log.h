#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace CodeBase {

	class CODEBASE_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log Macros
#define CB_CORE_CRITICAL(...)	::CodeBase::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define CB_CORE_ERROR(...)		::CodeBase::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CB_CORE_WARN(...)		::CodeBase::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CB_CORE_INFO(...)		::CodeBase::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CB_CORE_TRACE(...)		::CodeBase::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client Log Macros
#define CB_CRITICAL(...)	::CodeBase::Log::GetClientLogger()->critical(__VA_ARGS__)
#define CB_ERROR(...)	::CodeBase::Log::GetClientLogger()->error(__VA_ARGS__)
#define CB_WARN(...)		::CodeBase::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CB_INFO(...)		::CodeBase::Log::GetClientLogger()->info(__VA_ARGS__)
#define CB_TRACE(...)	::CodeBase::Log::GetClientLogger()->trace(__VA_ARGS__)
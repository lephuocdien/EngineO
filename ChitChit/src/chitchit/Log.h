#pragma once
#include<memory.h>
#include"core.h"
#include"spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include"spdlog/fmt/ostr.h"
namespace CHITCHIT
{
	class CHITCHIT_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };
	private:
		static std::shared_ptr<spdlog::logger>s_CoreLogger;
		static std::shared_ptr<spdlog::logger>s_ClientLogger;
	};
}
//core log macro
#define CHITCHIT_CORE_ERROR(...)	::CHITCHIT::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CHITCHIT_CORE_INFO(...)		::CHITCHIT::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CHITCHIT_CORE_WARN(...)		::CHITCHIT::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CHITCHIT_CORE_TRACE(...)	::CHITCHIT::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CHITCHIT_CORE_CRITICAL(...)	::CHITCHIT::Log::GetCoreLogger()->critical(__VA_ARGS__)

//client log macro
#define CHITCHIT_ERROR(...)			::CHITCHIT::Log::GetClientLogger()->error(__VA_ARGS__)
#define CHITCHIT_INFO(...)			::CHITCHIT::Log::GetClientLogger()->info(__VA_ARGS__)
#define CHITCHIT_WARN(...)			::CHITCHIT::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CHITCHIT_TRACE(...)			::CHITCHIT::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CHITCHIT_CRITICAL(...)		::CHITCHIT::Log::GetClientLogger()->critical(__VA_ARGS__)

#pragma once

#ifdef CHITCHIT_PLATFORM_WINDOW

extern CHITCHIT::Application* CHITCHIT::CreateApplication();

int  main(int argc,char** argv)
{
	CHITCHIT::Log::Initaa();
	CHITCHIT::Log::GetCoreLogger()->warn("Initlog");
	CHITCHIT::Log::GetClientLogger()->info("Initlog");
	auto app = CHITCHIT::CreateApplication();
	app->Run();
	
	delete app;

	
}
#endif

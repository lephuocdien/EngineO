#pragma once

#ifdef CHITCHIT_PLATFORM_WINDOW

extern CHITCHIT::Application* CHITCHIT::CreateApplication();

int  main(int argc,char** argv)
{
	CHITCHIT::Log::Initaa();
	CHITCHIT_CORE_WARN("Initlog");
	int a = 5;
	CHITCHIT_INFO("Hello  Var={0}",a);
	auto app = CHITCHIT::CreateApplication();
	app->Run();
	
	delete app;

	
}
#endif

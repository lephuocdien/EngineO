#pragma once
#include"core.h"
namespace CHITCHIT
{
	class CHITCHIT_API Application
	{
	public:
		Application();
		virtual	 ~Application();
		void Run();
	};
	//define at client
	Application* CreateApplication();
}


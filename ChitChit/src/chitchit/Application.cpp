#include "hzpc.h"
#include "Application.h"
#include"Events/ApplicationEvent.h"
#include"Log.h"
namespace CHITCHIT
{
	Application::Application()
	{

	}
	Application::~Application()
	{

	}
	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CHITCHIT_TRACE(e);
			
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CHITCHIT_TRACE(e);
		}
		while (true)
		{

		}
	}

}

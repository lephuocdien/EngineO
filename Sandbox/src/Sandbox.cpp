#include <ChitChit.h>

class Sandbox :public CHITCHIT::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};
CHITCHIT::Application * CHITCHIT::CreateApplication()
{
	return new Sandbox();
}

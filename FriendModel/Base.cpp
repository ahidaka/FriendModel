#include <Windows.h>
#include "Base.h"
#include "Read.h"
#include "Write.h"
#include "Tool.h"


void Base::Preprocess(DataOption* Option)
{

}
void Base::Init()
{
	Reader = new DataReader();
	Writer = new DataWriter();
	Tooler = new DataTooler();
}

void Base::Run()
{
	while (TRUE) {
		Reader->Read(BaseParamRead);
		Reader->Read(BaseParamWrite);
		Tooler->Tool(BaseParamTool);
	}
}


int Model()
{
	Base* base = new Base();
	DataOption* option = new DataOption();

	base->Preprocess(option);
	base->Init();
	base->Run();

	return 0;
}

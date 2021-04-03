#pragma once

#include "Read.h"
#include "Write.h"
#include "Tool.h"

class Base {

	friend class DataReader;
	friend class DataWriter;
	friend class DataTooler;

public:
	void Preprocess(DataOption *Option);
	void Init();
	void Run();

private:
	int BaseParamRead;
	int BaseParamWrite;
	int BaseParamTool;

	DataReader* Reader;
	DataWriter* Writer;
	DataTooler* Tooler;

	DataOption* Option;
};

#pragma once

#include "Base.h"

class DataTooler {
	friend class Base;

public:
	static void Tool(int i);
	static void SpecifiedTool();

};

class DataOption {
	friend class Base;

private:
	int Parameter0;
	int Parameter1;
	int Parameter2;
	int Parameter3;
	int Parameter4;
};

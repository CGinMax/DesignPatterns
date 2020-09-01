#include <iostream>
#include "EventSource.h"
#include "TechListener.h"
#include "StuListener.h"

int main(int argc, char *argv[])
{
	EventSource *bellSource = new EventSource("教室小铃声");

	EventListener *techer = new TechListener();
	EventListener *student = new StuListener();
	bellSource->addListener(techer);
	bellSource->addListener(student);

	bellSource->ring();
	return 0;
}

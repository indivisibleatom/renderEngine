#ifndef _EVENTMANAGER_H_
#define _EVENTMANAGER_H_

class IEventManager
{
public:
	virtual bool processEventLoop() = 0;
	virtual ~IEventManager() = 0 {}
};

void GetEventManager(__out boost::scoped_ptr<IEventManager>& eventManager);

#endif//_EVENTMANAGER_H_
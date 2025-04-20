#include <stdio.h>
#include <stdint.h>

enum LampSignals {                          /* all signals for the Lamp FSM */
    LAMP_HIGH,  // 0
    LAMP_OFF,   // 1
    TICK_SIG
};

typedef struct Event{
	uint8_t sig;
}Event_t;

typedef struct UserEvent{
	Event_t super;
}UserEvent_t;

typedef struct TickEvent{
	Event_t super;
	uint8_t finetick;
}TickEvent_t;

void event(Event_t const *e);
void user(Event_t const *e);
void system(Event_t const *e);


int main()
{
	static Event_t event_evt = {LAMP_HIGH};
	static TickEvent_t tick_evt = {TICK_SIG, 23};
	static UserEvent_t user_evt = {LAMP_OFF};
	// pointer initialization to NULL
	Event_t const *e = (Event_t *)0 ; 
	static Event_t const on_evt   = { LAMP_HIGH   };
	static Event_t const off_evt = { LAMP_OFF };
	static Event_t const arm_evt  = { TICK_SIG  };
	
	printf("&event_evt      :  %d\n", &event_evt);
	printf("event_evt       :  %d\n", event_evt);
	printf("&(event_evt.sig):  %d\n", &(event_evt.sig));
	printf("event_evt.sig   :  %d\n", event_evt.sig);
	printf("event_evt       :  %d\n", event_evt);
	printf("-----------------------------------\n");
	event((Event_t *)&event_evt);
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");

	printf("&user_evt            :  %d\n", &user_evt);
	printf("user_evt             :  %d\n", user_evt);
	printf("&(user_evt.super.sig):  %d\n", &(user_evt.super.sig));
	printf("user_evt.super.sig   :  %d\n", user_evt.super.sig);
	printf("user_evt             :  %d\n", user_evt);
	printf("-----------------------------------\n");
	user((Event_t *)&user_evt);
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");

	printf("&tick_evt      :  %d\n", &tick_evt);
	printf("tick_evt       :  %d\n", tick_evt);
	printf("&(tick_evt.super.sig):  %d\n", &(tick_evt.super.sig));
	printf("&(tick_evt.finetick):  %d\n", &(tick_evt.finetick));	
	printf("tick_evt.super.sig   :  %d\n", tick_evt.super.sig);
	printf("tick_evt.finetick   :  %d\n", tick_evt.finetick);
	printf("tick_evt       :  %d\n", tick_evt);
	printf("-----------------------------------\n");
	system((Event_t *)&tick_evt);
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");
	
	return 0; //
	
}

void event(Event_t const *e)
{
	printf("&e = %d\n",&e);
	printf("e = %d\n",e);
	printf("&(e->sig) = %d\n",&(e->sig));
	printf("e->sig = %d\n",e->sig);
	printf("((Event_t *)e)->sig = %d\n",((Event_t *)e)->sig);
	
}

void user(Event_t const *e)
{
	printf("&e = %d\n",&e);
	printf("e = %d\n",e);
	printf("&(e->sig) = %d\n",&(e->sig));
	printf("e->sig = %d\n",e->sig);
	printf("((UserEvent_t *)e)->super.sig = %d\n",((UserEvent_t *)e)->super.sig);
	
}

void system(Event_t const *e)
{
	printf("&e = %d\n",&e);
	printf("e = %d\n",e);
	printf("&(e->sig) = %d\n",&(e->sig));
	printf("e->sig = %d\n",e->sig);
	printf("(++e)->sig = %d\n",(++e)->sig);
	printf("(--e)->sig = %d\n",(--e)->sig);
	printf("((TickEvent_t *)e)->super.sig = %d\n",((TickEvent_t *)e)->super.sig);
	printf("((TickEvent_t *)e)->finetick = %d\n",((TickEvent_t *)e)->finetick);

}



// Archived code
	//void Bomb1_dispatch(Bomb1 *me, Event const *e);
	//printf("Tick events: super: %d, ss: %d \n", tick_evt.super.sig, tick_evt.finetick);
	//printf("User events: super: %d\n", user_evt.super.sig);
	//printf("-----------------------------------\n");
	//printf("Event      : super: %d\n", event_evt.sig);
	//user((Event_t *)&user_evt);
	//printf("-----------------------------------\n");
	//system((Event_t *)&tick_evt);
	//printf("-----------------------------------\n");
	//event((Event_t *)&event_evt);
	
	//printf("tick_evt.super = %d\n",tick_evt.super.sig);
	//printf("tick_evt.finetick = %d\n",tick_evt.finetick);
	/*
	printf("-----------------------------------\n");
	//Default event at init
	value((Event_t *)&tick_evt);
	printf("-----------------------------------\n");	
	e = &off_evt;
	value((Event_t *)&tick_evt);
	printf("-----------------------------------\n");
	e = &on_evt;
	value((Event_t *)&tick_evt);
	printf("-----------------------------------\n");*/
	
	
	//event generator
	/* 1. User event generator. check if any swictch is pressed. 
	And call dispatcher */
	
	/* 2. time tick event generator. increment finetick == 10, 
	if true increment tick , and reset finetick
	And call dispatcher */
	
	//event dispatcher
	
	
	
	//printf("e = %d\n",((Event_t *)e)->sig);
	
	
	/*printf("super = %d\n",e->sig);
	printf("super = %d\n",((TickEvent_t *)e)->super.sig);
	printf("super = %d\n",((TickEvent_t *)e)->super);
	printf("finetick = %d\n",((TickEvent_t *)e)->finetick);*/
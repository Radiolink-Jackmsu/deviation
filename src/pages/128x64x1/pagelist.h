#ifdef PAGEDEF
PAGEDEF(PAGEID_MAIN,     PAGE_MainInit,        PAGE_MainEvent,        PAGE_MainExit,    _tr_noop("Main page"))
PAGEDEF(PAGEID_MENU,     PAGE_MenuInit,        NULL,                  NULL,             "")
PAGEDEF(PAGEID_MIXER,    PAGE_MixerInit,       PAGE_MixerEvent,       NULL,             _tr_noop("Mixer"))
PAGEDEF(PAGEID_MODEL,    PAGE_ModelInit,       PAGE_ModelEvent,       NULL,             _tr_noop("Model setup"))
PAGEDEF(PAGEID_TIMER,    PAGE_TimerInit,       PAGE_TimerEvent,       NULL,             _tr_noop("Timers"))
PAGEDEF(PAGEID_TELEMCFG, PAGE_TelemconfigInit, PAGE_TelemconfigEvent, NULL,             _tr_noop("Telemetry config"))
PAGEDEF(PAGEID_TRIM,     PAGE_TrimInit,        PAGE_TrimEvent,        NULL,             _tr_noop("Trims"))
PAGEDEF(PAGEID_MAINCFG,  PAGE_MainCfgInit,     PAGE_MainCfgEvent,     NULL,             _tr_noop("Main page config"))
PAGEDEF(PAGEID_TXCFG,    PAGE_TxConfigureInit, PAGE_TxConfigureEvent, NULL,             _tr_noop("Transmitter config"))
PAGEDEF(PAGEID_TELEMMON, PAGE_TelemtestInit,   PAGE_TelemtestEvent,   NULL,             _tr_noop("Telemetry monitor"))
PAGEDEF(PAGEID_CHANMON,  PAGE_ChantestInit,    PAGE_ChantestEvent,    PAGE_ChantestExit,_tr_noop("Channel monitor"))
PAGEDEF(PAGEID_USB,      PAGE_USBInit,         PAGE_USBEvent,         PAGE_USBExit,     _tr_noop("USB"))
PAGEDEF(PAGEID_ABOUT,    PAGE_AboutInit,       NULL,                  NULL,             _tr_noop("About Deviation"))
#endif
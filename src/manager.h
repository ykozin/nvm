struct httpcmd {
  char command[1024];
  char object[1024];
  char data[1024];  
};

struct mngdata {
  GMainLoop *mainloop;
  Scfg *cfg;
  
  CNVM_Serverout  *enc;
  CNVM_Module     *tech;
  CNVM_Module     *player;
};

void * managerserver (void *ptr);
bool parsecmd (httpcmd *cmd, char *buff);
bool wrk (httpcmd *cmd, char *reply);
bool getRegExValue(const char *pattern, const char *buff, char *val);
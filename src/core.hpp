struct Scodep {
  int width;
  int height;
  int framerate;
  int audiorate;
  int audiochannels;
  int videoencbitrate;
  int audioencbitrate;
};

struct Scfg {
  char CDNserverIP [50];
  int CDNserverPort;
  
  char  logofile [400];
  float logok;
  char videodir [400];
  char logfile [400];
  int logpriority;
  char socketpath [400];
  int socketport;
  
  char  dbserver [100];
  int   dbport;
  char  dbuser [50];
  char  dbpassword [50];
  char  database [100];
  
  Scodep production;
  Scodep streamingLOW;
};

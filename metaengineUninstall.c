#include<stdlib.h>
#include<dirent.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	
system("sudo systemctl stop cashout.service");
system("sudo kill -9 $(pidof cashout)");
system("sudo systemctl stop metaengine.service");
system("sudo kill -9 $(pidof metaengine)");
system("sudo rm -rf /var/log/metaengine.log");
system("sudo rm -rf /etc/systemd/system/cashout.service");
system("sudo rm -rf /etc/systemd/system/metaengine.service");
system("sudo rm -rf metaengine");
system("sudo rm -rf /home/metaengine");
system("sudo rm -rf /usr/bin/metaengine");
system("sudo rm -rf /usr/bin/cashout");
system("sudo rm -rf /var/lib/metaengine/metaengine-config-053.yaml");
system("sudo rm -rf /var/lib/metaengine");
system("sudo rm -rf /data/metaengine");


}


#include <unistd.h>
#include <vector>

#include "MQTTClient.h"

int main ()
{
  MQTTClient::MQTTClient mqtt ("teste-client");

  mqtt.connect ("127.0.0.1", 1883);

  mqtt.publish ("teste", "MENSAGEM\n");
  /*
  std::vector<std::string> topics;
  topics.push_back ("teste");
  mqtt.subscribe (topics);
  */
  mqtt.disconnect ();

  /* sleep to recv any incomming packets */
  sleep (1);

  return 0;
}

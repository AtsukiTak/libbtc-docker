#include <btc/vector.h>
#include <btc/chainparams.h>
#include <btc/net.h>
#include <stdio.h>

int main() {
  vector *ips = vector_new(10, free);
  const btc_dns_seed seed = btc_chainparams_main.dnsseeds[0];
  btc_get_peers_from_dns(seed.domain, ips, btc_chainparams_main.default_port, AF_INET);

  for (unsigned int i = 0; i<ips->len; i++)
  {
    char *ip = (char *)vector_idx(ips, i);
    printf("dns seed ip %d: %s\n", i, ip);
  }

  return 0;
}

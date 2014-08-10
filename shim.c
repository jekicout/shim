#include <linux/err.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/socket.h>
#include <linux/in.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/timer.h>
#include <linux/string.h>
#include <linux/sockios.h>
#include <linux/net.h>
#include <linux/ip.h>
#include <linux/if_packet.h>
#include <linux/if_ether.h>
#include <linux/syscalls.h>
#include <linux/capability.h>
#include <linux/fcntl.h>
#include <linux/mm.h>
#include <linux/interrupt.h>
#include <linux/stat.h>
#include <linux/init.h>
#include <linux/poll.h>
#include <linux/netfilter.h>
#include <linux/netfilter_ipv4.h>
#include <linux/random.h>
#include <linux/slab.h>

#include <asm/uaccess.h>
#include <asm/unistd.h>

#include <linux/inet.h>
#include <linux/igmp.h>
#include <linux/inetdevice.h>
#include <linux/netdevice.h>
#include <net/checksum.h>
#include <net/ip.h>
#include <net/protocol.h>
#include <net/arp.h>
#include <net/route.h>
#include <net/ip_fib.h>
#include <net/inet_connection_sock.h>
#include <net/tcp.h>
#include <net/udp.h>
#include <net/udplite.h>
#include <net/ping.h>
#include <linux/skbuff.h>
#include <net/sock.h>
#include <net/raw.h>
#include <net/icmp.h>
#include <net/ipip.h>
#include <net/inet_common.h>
#include <net/xfrm.h>
#include <net/net_namespace.h>

void module_isk_destruct(struct sock *sk)
{
    printk(sk->sk_state);
    inet_sock_destruct(sk);
}
EXPORT_SYMBOL(module_isk_destruct);

int module_inet_release(struct socket *sock)
{
    printk(sk->sk_state);
    return inet_release(sock);
}
EXPORT_SYMBOL(module_inet_release);

void ker_raw_hash_sk(struct sock *sk)
{
    printk(sk->sk_state);
    raw_hash_sk(sk);
}
EXPORT_SYMBOL(ker_raw_hash_sk);

void ker_raw_unhash_sk(struct sock *sk)
{
    printk(sk->sk_state);
    raw_unhash_sk(sk);
}
EXPORT_SYMBOL(ker_raw_unhash_sk);


int tcp_register_cc_algorithms(struct tcp_congestion_ops *ca)
{
	printk(ca->name);
	return tcp_register_congestion_control(ca);
}
EXPORT_SYMBOL(tcp_register_cc_algorithms);

void tcp_unregister_cc_algorithms(struct tcp_congestion_ops *ca)
{
	printk(ca->name);
	tcp_unregister_congestion_control(ca);
}
EXPORT_SYMBOL(tcp_unregister_cc_algorithms);

MODULE_AUTHOR("Null");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHIM");

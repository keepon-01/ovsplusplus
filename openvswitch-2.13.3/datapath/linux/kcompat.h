#include <linux/version.h>
#ifndef RHEL_RELEASE_CODE
#define RHEL_RELEASE_CODE 0
#define RHEL_RELEASE_VERSION(a, b) 0
#endif
#define HAVE_RT6_GET_COOKIE 1
#define HAVE_IPV6_STUB_WITH_DST_ENTRY 1
#define HAVE_IPV6_DST_LOOKUP_NET 1
#define HAVE_IPV6_DST_LOOKUP_FLOW_NET 1
#define HAVE_IPV6_STUB 1
#define HAVE_IPV6_DST_LOOKUP_FLOW 1
#define HAVE_ERR_CAST 1
#define HAVE_IS_ERR_OR_NULL 1
#define HAVE_PTR_ERR_OR_ZERO 1
#define HAVE_UPSTREAM_STATIC_KEY 1
#define HAVE_DEFINE_STATIC_KEY 1
#define HAVE_ETH_HW_ADDR_RANDOM 1
#define HAVE_ETHER_ADDR_COPY 1
#define HAVE_IFLA_GENEVE_TOS 1
#define HAVE_RTNL_LINK_STATS64 1
#define HAVE_VLAN_SET_ENCAP_PROTO 1
#define HAVE_VLAN_HWACCEL_PUSH_INSIDE 1
#define HAVE_IPV4_IS_MULTICAST 1
#define HAVE_PROTO_PORTS_OFFSET 1
#define HAVE_IP_SELECT_IDENT_USING_NET 1
#define HAVE_INET_GET_LOCAL_PORT_RANGE_USING_NET 1
#define HAVE_IP_DEFRAG_TAKES_NET 1
#define HAVE_IP_DO_FRAGMENT_TAKES_NET 1
#define HAVE_IP_LOCAL_OUT_TAKES_NET 1
#define HAVE_IP_SKB_DST_MTU 1
#define HAVE_CORRECT_MRU_HANDLING 1
#define HAVE___IP_TUNNEL_CHANGE_MTU 1
#define HAVE_SUB_FRAG_MEM_LIMIT_ARG_STRUCT_NETNS_FRAGS 1
#define HAVE_INETPEER_VIF_SUPPORT 1
#define USE_BUILTIN_DST_CACHE 1
#define MPLS_HEADER_IS_L3 1
#define HAVE_SOCK_CREATE_KERN_NET 1
#define HAVE_NDO_FILL_METADATA_DST 1
#define HAVE_DEV_DISABLE_LRO 1
#define HAVE_DEV_GET_STATS 1
#define HAVE_DEV_GET_BY_INDEX_RCU 1
#define HAVE_DEV_RECURSION_LEVEL 1
#define HAVE___SKB_GSO_SEGMENT 1
#define HAVE_SKB_GSO_ERROR_UNWIND 1
#define HAVE_CAN_CHECKSUM_PROTOCOL 1
#define HAVE_NDO_GET_IFLINK 1
#define USE_UPSTREAM_TUNNEL_GSO 1
#define HAVE_NDO_UDP_TUNNEL_ADD 1
#define HAVE_NETDEV_FEATURES_T 1
#define HAVE_PCPU_SW_NETSTATS 1
#define HAVE_SKB_CSUM_HWOFFLOAD_HELP 1
#define HAVE_GRO_REMCSUM 1
#define HAVE_IFF_PHONY_HEADROOM 1
#define HAVE_NETDEV_MASTER_UPPER_DEV_LINK_PRIV 1
#define HAVE_NET_DEVICE_WITH_MAX_MTU 1
#define HAVE_NF_HOOK_STATE 1
#define HAVE_NF_HOOK_STATE_NET 1
#define HAVE_NF_REGISTER_NET_HOOK 1
#define HAVE_NF_HOOKFN_ARG_PRIV 1
#define HAVE_CONFIG_NF_NAT_NEEDED 1
#define HAVE_NF_IPV6_OPS_FRAGMENT 1
#define HAVE_NF_CT_DELETE 1
#define HAVE_NF_CT_TMPL_ALLOC_TAKES_STRUCT_ZONE 1
#define HAVE_NF_CT_GET_TUPLEPR_TAKES_STRUCT_NET 1
#define HAVE_NF_CT_SET 1
#define HAVE_NF_CT_INVERT_TUPLEPR 1
#define HAVE_NF_CT_ZONE_INIT 1
#define HAVE_NET_NS_GET 1
#define HAVE_NF_CONNLABELS_GET 1
#define HAVE_NF_CONNLABELS_GET_TAKES_BIT 1
#define HAVE_NF_CT_NAT_EXT_ADD 1
#define HAVE_NF_NAT_ALLOC_NULL_BINDING 1
#define HAVE_NF_CT_SEQ_ADJUST 1
#define HAVE_NF_CT_TIMEOUT_FIND_GET_HOOK_NET 1
#define HAVE_PRANDOM_U32 1
#define HAVE_PRANDOM_U32_MAX 1
#define HAVE_GET_LINK_NET 1
#define HAVE_NAME_ASSIGN_TYPE 1
#define HAVE_POSSIBLE_NET_T 1
#define HAVE_RCU_READ_LOCK_HELD 1
#define HAVE_LOCKDEP_RTNL_IS_HELD 1
#define HAVE_SKB_CHECKSUM_START_OFFSET 1
#define HAVE_INNER_PROTOCOL 1
#define HAVE_INNER_PROTOCOL_TYPE 1
#define HAVE_SKB_INNER_TRANSPORT_OFFSET 1
#define HAVE_KFREE_SKB_LIST 1
#define HAVE_SKB_DST_ACCESSOR_FUNCS 1
#define HAVE_SKB_COPY_FROM_LINEAR_DATA_OFFSET 1
#define HAVE_SKB_RESET_TAIL_POINTER 1
#define HAVE_SKB_COW_HEAD 1
#define HAVE_SKB_WARN_LRO 1
#define HAVE_CONSUME_SKB 1
#define HAVE_SKB_FRAG_PAGE 1
#define HAVE_SKB_HAS_FRAG_LIST 1
#define HAVE___SKB_FILL_PAGE_DESC 1
#define HAVE_SKB_RESET_MAC_LEN 1
#define HAVE_SKB_UNCLONE 1
#define HAVE_SKB_ORPHAN_FRAGS 1
#define HAVE_SKB_GET_HASH 1
#define HAVE_SKB_CLEAR_HASH 1
#define HAVE_SKB_ZEROCOPY 1
#define HAVE_SKB_ENSURE_WRITABLE 1
#define HAVE_SKB_VLAN_POP 1
#define HAVE___SKB_VLAN_POP 1
#define HAVE_SKB_VLAN_PUSH 1
#define HAVE_SKB_CLEAR_HASH_IF_NOT_L4 1
#define HAVE_SKB_POSTPUSH_RCSUM 1
#define HAVE_LCO_CSUM 1
#define HAVE_SKB_NFCT 1
#define HAVE_SKB_PUT_ZERO 1
#define HAVE_BOOL_TYPE 1
#define HAVE_CSUM_TYPES 1
#define HAVE_CSUM_REPLACE4 1
#define HAVE_CSUM_UNFOLD 1
#define HAVE___SKB_DST_COPY 1
#define HAVE_GENL_HAS_LISTENERS 1
#define HAVE_MCGRP_OFFSET 1
#define HAVE_PARALLEL_OPS 1
#define HAVE_GENL_HAS_LISTENERS_TAKES_NET 1
#define HAVE_GENLMSG_PARSE 1
#define HAVE_GENL_NOTIFY_TAKES_FAMILY 1
#define HAVE_IP6_FH_F_SKIP_RH 1
#define HAVE___IPV6_ADDR_JHASH 1
#define HAVE_IP_FRAGMENT_TAKES_SOCK 1
#define HAVE_NLA_PUT_64BIT 1
#define HAVE_NLA_GET_BE16 1
#define HAVE_NLA_PUT_BE16 1
#define HAVE_NLA_PUT_BE32 1
#define HAVE_NLA_PUT_BE64 1
#define HAVE_NLA_PUT_IN_ADDR 1
#define HAVE_NLA_FIND_NESTED 1
#define HAVE_NLA_IS_LAST 1
#define HAVE_NETLINK_EXT_ACK 1
#define HAVE_SCTP_COMPUTE_CKSUM 1
#define HAVE_VLAN_INSERT_TAG_SET_PROTO 1
#define HAVE___VLAN_INSERT_TAG 1
#define HAVE_VLAN_GET_PROTOCOL 1
#define HAVE_SKB_VLAN_TAGGED 1
#define HAVE_ETH_TYPE_VLAN 1
#define HAVE_METADATA_DST_ALLOC_WITH_METADATA_TYPE 1
#define HAVE_U64_STATS_FETCH_BEGIN_IRQ 1
#define HAVE_VXLAN_METADATA 1
#define HAVE_UDP_FLOW_SRC_PORT 1
#define HAVE_UDP_V4_CHECK 1
#define HAVE_UDP_TUNNEL_GRO_COMPLETE 1
#define HAVE_UDP_TUNNEL_SOCK_CFG_WITH_GRO_RECEIVE 1
#define HAVE_IGNORE_DF_RENAME 1
#define HAVE_NET_NAME_UNKNOWN 1
#define HAVE_SK_NO_CHECK_TX 1
#define HAVE_NO_CHECK6_TX 1
#define HAVE_DEFRAG_ENABLE_TAKES_NET 1
#define HAVE_NEEDS_FREE_NETDEV 1
#define HAVE_VXLAN_DEV_CFG 1
#define HAVE_NF_CONNTRACK_HELPER_PUT 1
#define HAVE_SKB_GSO_UDP 1
#define HAVE_EXT_ACK_IN_RTNL_LINKOPS 1
#define HAVE_IP_CT_UNTRACKED 1
#define HAVE_UPPER_DEV_LINK_EXTACK 1
#define HAVE_LINUX_COMPILER_TYPES_H 1
#define HAVE_KTIME_GET_TS64 1
#define HAVE_KTIME_GET_NS 1
#define HAVE_NULL_COMPUTE_PSEUDO 1
#define HAVE_SKB_CHECKSUM_CONVERT 1
#define HAVE_NET_DEVICE_MAX_MTU 1
#define HAVE_SKB_GSO_IPXIP6 1
#define HAVE_IP6_MAKE_FLOWLABEL_FL6 1
#define HAVE_NETIF_KEEP_DST 1
#define HAVE_NDO_GET_IFLINK 1
#define HAVE_SKB_SET_INNER_IPPROTO 1
#define HAVE_TUNNEL_ENCAP_TYPES 1
#define HAVE_IFLA_IPTUN_ENCAP_TYPE 1
#define HAVE_IFLA_IPTUN_COLLECT_METADATA 1
#define HAVE_IFLA_GRE_ENCAP_DPORT 1
#define HAVE_IFLA_GRE_COLLECT_METADATA 1
#define HAVE_IFLA_GRE_IGNORE_DF 1
#define HAVE_IFLA_GRE_FWMARK 1
#define HAVE_IFLA_GRE_ERSPAN_INDEX 1
#define HAVE_IFLA_IPTUN_FWMARK 1
#define HAVE_SKBUFF_CSUM_VALID 1
#define HAVE_SKB_CHECKSUM_SIMPLE_VALIDATE 1
#define HAVE_VOID_NDO_GET_STATS64 1
#define HAVE_OVERFLOW_H 1
#define HAVE_STRUCT_SIZE 1
#define HAVE_KVMALLOC_ARRAY 1
#define HAVE_KVMALLOC_NODE 1
#define HAVE_NF_CONNTRACK_L3PROATO_H 1
#define HAVE_IPV6_FRAG_H 1
#define HAVE_NF_CT_HELPER_EXT_ADD_TAKES_HELPER 1
#define HAVE_GRE_CALC_HLEN 1
#define HAVE_RBTREE_RB_LINK_NODE_RCU 1
#define HAVE_DST_OPS_CONFIRM_NEIGH 1
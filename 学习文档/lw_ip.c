802.11��׼��http://baike.baidu.com/link?url=5Tae-tqq7Z6k-MJwXUwnq7L02uQaYkO5Ns76iIRUBJ08-H927pF95RzXsv7m-Wz-MxBRAvuWvOD3G-sVzKIsDK
================================================================================
LW/IP�����������ѧԺ��SICS����Adam Dunkels������һ��С�͵Ŀ�Դ��TCP/IPЭ��ջ
˵������һ�����͵ģ�Light Weight��IPЭ��
LW/IPЭ��ջԭ��http://blog.sina.com.cn/s/blog_62a85b950101am53.html
================================================================================
��飺
	1��LWIP��Light Weight�����ͣ�IPЭ�飬���޲���ϵͳ��֧�ֶ��������С�LWIPʵ�ֵ��ص����ڱ���TCPЭ����Ҫ���ܵĻ����ϼ���
	��RAM��ռ�ã�һ��ֻҪ�����ֽڵ�RAM��40K���ҵ�ROM�Ϳ������У���ʹLWIPЭ��ջ�ʺ��ڵͶ˵�Ƕ��ʽϵͳ��ʹ��
	2��LWIPЭ��ջ��Ҫ��ע�����������ٶ��ڴ��ʹ�úʹ���Ĵ�С�������Ϳ���ʹLWIP��������Դ���޵�Сƽ̨������Ƕ��ʽϵͳ��Ϊ��
	�򻯴�����̺��ڴ�Ҫ��LWIP��API�����˲ü������Բ���Ҫ����һЩ����
----------------------------------------------------------------------------------->
ģʽ����
	1��RAW API
		1����Э��ջ��Ӧ�ó���ŵ�һ���������棬�ýӿڻ��ں����ص�������ʹ�øýӿڵ�Ӧ�ó����ý������������������ʹӦ�ó���
		��д�ѶȼӴ��Ҵ��벻����⡣
		2��Ϊ�˽������ݣ�Ӧ�ó������Э��ջע��һ���ص��������ûص��������ض�����������������ù��������ӵ���һ����Ϣ������
		�ص������ͻᱻЭ��ջ���á�
		3����ȱ��
			1���ŵ㣺Ӧ�ó����Э��ջפ����һ�������У���ô���ͺͽ������ݲ���Ҫ���н����л���
			2��ȱ�㣺Ӧ�ó�����ʹ�Լ��������������У������ᵼ��ͨѶ�����½���ԭ����TCP/IP�������������㲻�ܲ��з��������ȱ
			����ͨ����Ӧ�ó����Ϊ���������˷���һ���ָ���ͨѶ��һ���ָ��������㡣
	2��lwip API
		1��lwip�ѽ��պʹ������һ���߳����棨ȱ�㴦��������΢�ӳ٣����վͻᱻ������ֱ�����Ƶ����������Ӧ����ʱ���������⣩��
		��ˣ����պʹ������ֿ�
		2���������������������У����ղ������������ʽ���������ݰ������ȥ����̫����ͷ�õ�IP����Ȼ��ֱ�ӵ���tcpip_input()
		��������Ͷ��mbox���䣬Ͷ�ݽ������������������һ�����ݰ��Ľ��գ�����Ͷ�ݵ�IP������TCPIP�̼߳�����������ʹ��ĳ��ip
		������ʱ�����Ҳ�������Ƶ���Ķ�����������
	3��BSD API
		BSD API�ṩ�˻���open-read-write-closeģ�͵�UNIX��׼API������ص�������ӿɿ���ֲ�ԣ�����Ƕ��ʽϵͳ��Ч�ʱȽϵͣ�ռ����Դ
		�ࡣ����Ƕ��ʽ�ǲ������̵�
--------------------------------------------------------------------------------->
���ԣ�
	1��֧������ӿ��µ�ipת��
	2��֧��ICMPЭ��
	3������ʵ������չ��UDP���û����ݱ�Э�飩
	4�������������ơ�RTT���㡢���ٻָ��Ϳ���ת����TCP���������Э�飩
	5���ṩר�ŵ��ڲ��ص��ӿڣ�Raw API�����������Ӧ�ó�������
	6����ѡ���Berkeley�ӿ�API���ڶ��߳������ʹ�ã�
	7�������°汾��֧��APP
	8���°���������IP fragment��֧��
	9��֧��DHCPЭ��
--------------------------------------------------------------------------------->
��̬�ڴ����
	LWIPЭ��ջʹ�ö�̬�ڴ�ѷ�����ԣ���̬�ڴ�ѷ����������һ�����ȶ���ô�С���ڴ�
	���н��й����ڴ�ķ�������ǲ�ȡ�����ʣ�First Fit����ʽ��ֻҪ�ҵ�һ��������
	���ڴ���Ŀ��п飬�ʹ����г����ʵĿ飬����ʣ��Ĳ��ַ��ص��ڴ���С�������ڴ�
	������С��С�Ķ����ƣ�һ����12�ֽڣ�ǰ�����ֽڴ���ڴ�����������õ�˽�����ݣ���
	���ݲ��ܱ��û������޸ģ�����ᵼ���������⣬�ڴ��ͷŵĹ������෴�ģ�����������鿴
	�ýڵ�ǰ�����ڵ��ڴ���Ƿ���У����������ϲ���һ������ڴ���п顣
	ȱ�㣺Ƶ���Ķ�̬������ͷţ��ᵼ�����ص��ڴ���Ƭ�����·���ʧ��
	�Ƽ�������-->�ͷ�-->����-->�ͷ�
	1��mem_init()
		�ڴ�ѵĳ�ʼ����������Ҫ�Ǹ�֪�ڴ�ѵ���ֹ��ַ���Լ���ʼ�������б���lwip��ʼ
		���Լ�ʱ���ã��ýӿ�Ϊ�ڲ�˽�л��ӿڣ������û�����
	2��mem_malloc()
		1�����ڴ棬�������ܹ���Ҫ���ֽ��������������·����ڴ��ָ�룬ʧ�ܣ�����NULL��
		������ڴ��ܵ��ڴ�����Ӱ�죬���ܻ������Ĵ󡣷��صĿ�û�г�ʼ������Ҫ������
		��Ч���ݻ�0����ʼ������ڴ档
		2��������ͷŲ������жϺ���������У��ڴ����ȫ�ֱ���������ڴ�����롢�ͷŲ���
		�����̰߳�ȫ����������ж���߳���ͬʱ�����ڴ��������ͷţ���ô���ܻ���Ϊ�ź���
		�ĵȴ�����������ʱ��ϳ�
	3��mem_calloc()
		��mem_malloc()�ļ򵥰�װ������(Ԫ�ص���Ŀ��ÿ��Ԫ�صĴ�С�����������ĳ˻�������
		Ҫ�����ڴ�Ĵ�С)����ѷ�����ڴ�����(memset())��
FreeRTOSʹ���˶�̬�ѷ���Ͷ�̬�ڴ�����ְ취Э��������������Ľṹ��
	struct pbuf {
		struct pbuf *next;
		void *payload;
		u16_t tot_len;
		u16_t len;
		 
		u8_t  type;
		u8_t flags;
		u16_t ref;
	};
	1��һ�����ݰ�������Ҫ��������Ľṹ���γɵ�����tot_len�ǵ�ǰlen��nextָ���tot_len��
	�ͣ����һ��tot_len�Ǻ�len��ȣ���һ��tot_len�������������ݰ��ĳ��ȣ�
	2��ref��ʾһ��pbuf�����õĴ�����ֻ��ref��ֵΪ1����ɾ���ɹ�
	3��pbuf�����ͣ�PBUF_RAM��BUF_ROM��BUF_REF��PBUF_POOL
		PBUF_RAM��ͨ���ڴ�ѷ���õ�����Э��ջ���õ����
		PBUF_POOL����Ҫͨ���ڴ�ط���õ����������Ϳ����ڼ���ʱ���ڷ���õ����ڽ������ݰ�
					ʱLWIPһ��������ַ�ʽ��װ���ݣ������ڴ�ʱ��Э��ջ�����ڴ���з����ʵ�
					���ڴ�ظ�����������Ҫ����Ĵ�С
					memp_malloc(MEMP_PBUF_POOL);
		PBUF_ROM��PBUF_REF��ֻ����ṹ��ͷ�����������������Ŀռ�
pbuf���ͷţ���pub_free()������
	1��ֻ��pbuf-->ref=1ʱ���ܱ��ͷţ����������м�Ľڵ��ǲ��ܱ�ɾ���ģ��ܱ�ɾ���Ŀ϶���������
	�ڵ�
	2��PBUF_POOL���ͺ�PBUF_ROM���͡�PBUF_REF������Ҫͨ��memp_free()����ɾ����PBUF_RAM������Ҫ
	ͨ��mem_free()����ɾ����ԭ�򲻽��͡�
--------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------
1��LWIP����ӿڽṹ
	1��LWIP���߼��Ϸ�Ϊ�Ĳ㣺��·�㡢����㡢������Ӧ�ò㣬����֮������ٿ���
	�����ȡ�������˿����Ŀ���
	2��LWIP�в���netif����ṹ��������һ��Ӳ������ӿ�
		struct netif{
			struct netif *next;			//ָ����һ��netif�ṹ��ָ��
			struct ip_addr ip_addr;		//ip��ַ�������
			struct ip_addr netmask;
			struct ip_addr gw;
			
			err_t (* input)(struct pbuf *p,struct netif *imp); //�����������
				���Դ�������ȡ��һ�����ݰ�
			err_t (* output)(struct netif *netif,struct pbuf *p,struct ip_addr *ipaddr);
			//IP��������������������������һ�����ݰ�
			err_t (* linkoutput)(struct netif *netif, struct pbuf *p);  
			// ARPģ����������������������һ�����ݰ�
			
			void *state;   // �û����Զ������Ӹ�ָ�룬����ָ���û����ĵ�������Ϣ
			u8_t hwaddr_len; // Ӳ����ַ���ȣ�������̫������MAC��ַ���ȣ�Ϊ6���ֽ�
			u8_t hwaddr[NETIF_MAX_HWADDR_LEN];   //MAC��ַ
			u16_t mtu;   // һ�ο��Դ��͵�����ֽ�����������̫��һ����Ϊ1500
			u8_t flags;   // ����״̬��Ϣ��־λ			 
			char name[2]; // ����ӿ�ʹ�õ��豸�������͵�����
			u8_t num;    // ������ʾʹ��ͬ���������͵Ĳ�ͬ����ӿ�
		}
		next�ֶ�ָ����һ��netif�ṹ���ָ�룬����һ����Ʒ�����ж������оƬ��LWIP
		�Ὣ��������оƬ�Ľṹ������һ��������й�����һ��netif_list��ȫ�ֱ���ָ��
		����ͷ������һ��netif_defaultȫ�ֱ���ָ��ȱʡ������ӿڽṹ
	3����̫�����ݽ���
	LWIP��ʵ���˽���һ�����ݰ��ͷ���һ�����ݰ������Ŀ�ܣ������������ֱ���low_level_input
	��low_level_output���û���Ҫʹ��ʵ������������������������������ڵ�һƪ�н�����һ��
	���͵�LWIPӦ��ϵͳ�����������������̣��������ϲ�Ӧ�ó�����̣�Ȼ����LWIPЭ��ջ���̣�
	����ǵײ�Ӳ�����ݰ����ս��̡�
	�������ݺ�����void  ethernetif_input(void *arg)   
					//�����ý���ʱ��Ҫ��ĳ������ӿڽṹ��netif�ṹָ	
2��ARP��
	1��ARPЭ��ĺ�����ARP�����ARP��ʵ�ʾ��ǶԻ����Ľ��������¡���ѯ��ARP�Ļ��������һ����
	�Ļ������(entry)��ɵģ�LWIP�����������������ݽṹ��etharp_entry
	struct etharp_entry{
		#if ARP_QUEUEING
			struct etharp_q_entry *q;      // ���ݰ��������ָ��
		#endif
		struct ip_addr ipaddr;         // Ŀ��IP��ַ
		struct eth_addr ethaddr;       //  MAC��ַ
		enum etharp_state state;       // ������entry��״̬
		u8_t ctime;                 // ������entry��ʱ����Ϣ
		struct netif *netif;            // ��Ӧ����ӿ���Ϣ
	}
	2��LWIP�ں�ͨ������ķ�ʽ������ARP�����
		�磺static struct etharp_entry arp_table[ARP_TABLE_SIZE];
	3��state����ʶ��������״̬��ʹ����ö��
		enum etharp_state{
			ETHARP_STATE_EMPTY = 0,
			ETHARP_STATE_PENDING,
			ETHARP_STATE_STABLE
		}
	4��arp��������
	struct etharp_hdr {
		PACK_STRUCT_FIELD(struct eth_hdr ethhdr);    // 14�ֽڵ���̫�����ݱ�ͷ
		PACK_STRUCT_FIELD(u16_t hwtype);          // 2�ֽڵ�Ӳ������
		PACK_STRUCT_FIELD(u16_t proto);            // 2�ֽڵ�Э������
		PACK_STRUCT_FIELD(u16_t _hwlen_protolen);  // ����1�ֽڵĳ����ֶ�
		PACK_STRUCT_FIELD(u16_t opcode);          // 2�ֽڵĲ����ֶ�op
		PACK_STRUCT_FIELD(struct eth_addr shwaddr);  // 6�ֽ�ԴMAC��ַ
		PACK_STRUCT_FIELD(struct ip_addr2 sipaddr);   // 4�ֽ�ԴIP��ַ
		PACK_STRUCT_FIELD(struct eth_addr dhwaddr);  // 6�ֽ�Ŀ��MAC��ַ
		PACK_STRUCT_FIELD(struct ip_addr2 dipaddr);   // 4�ֽ�Ŀ��IP��ַ
	}PACK_STRUCT_STRUCT;
	PACK_STRUCT_FIELD()�Ƿ�ֹ�������ֶ���ĺ궨��
	5��ARP���ѯ
		1��arp��ƭ��α��mac
		2��static s8_t find_entry(struct ip_addr *ipaddr, u8_t flags)
			����һ��ip��ַ�����ظ�IP��ַ��Ӧ��ARP�������������������Ѱ��һ��
			ƥ���arp������ߴ���һ���µ�arp����ҷ��ظñ����������
			1��ipaddrΪ�ǿգ���������һ������pending��stable�����������û
			��ƥ�䵽�ñ����������һ��empty����ñ����IP�ֶα�����Ϊipaddr
			��������£�find_entry�������غ���Ҫ�������empty��Ϊpending�����
			ipaddrΪ��ֵ��ͬ������һ��empty�ı���
		3��etharp_query()
			�������ip��ַ����һ�����ݰ����߷���һ��ARP����
			err_t etharp_query(struct netif *netif, struct ip_addr *ipaddr, struct pbuf *q)
	6��arp��������
		static err_t update_arp_entry(struct netif *netif, struct ip_addr *ipaddr, struct eth_addr *ethaddr, u8_t flags)
		��̫����֡���Ϳ�����:IP��ARP��PPPOE��wlan��
		ethernet_input���ڽ��յײ�Ӳ�����������ݰ��������ip��������
		etharp_ip_input�������ARP������etharp_arp_input
		etharp_output������IP���Ҫ���͵����ݰ����������ݷ��ͳ�ȥ
3��IP��
	�ؼ��㣺��Ϣ���Ľ��ա���Ƭ���ݰ����顢��Ϣ���ķ���
	LWIP����ip���ݱ�ͷ��ʹ�ýṹ���ip_hdr��
	struct ip_hdr {
		PACK_STRUCT_FIELD(u16_t _v_hl_tos);  // ǰ�����ֶΣ��汾�š��ײ����ȡ���������
		PACK_STRUCT_FIELD(u16_t _len);  // �ܳ���
		PACK_STRUCT_FIELD(u16_t _id);   // ��ʶ�ֶ�
		PACK_STRUCT_FIELD(u16_t _offset); // 3λ��־��13λƬƫ���ֶ�
		#define IP_RF 0x8000        //
		#define IP_DF 0x4000        // �������ʶλ����
		#define IP_MF 0x2000        // �����з��鵽����ʶλ����
		#define IP_OFFMASK 0x1fff  // ��ȡ13λƬƫ���ֶε�����
		PACK_STRUCT_FIELD(u16_t _ttl_proto);  // TTL�ֶκ�Э���ֶ�
		PACK_STRUCT_FIELD(u16_t _chksum);   // �ײ�У����ֶ�
		PACK_STRUCT_FIELD(struct ip_addr src);  // ԴIP��ַ
		PACK_STRUCT_FIELD(struct ip_addr dest);  // Ŀ��IP��ַ
	} PACK_STRUCT_STRUCT;
	LWIP������IP���ݰ�ͷ����װ�ڲ�ͬ��pbuf����
	inet_chksum()�����ipͷ��У���
	1��LWIP��ip��Ƭ
		�õ������ݽṹip_reassdata
		struct ip_reassdata {
			struct ip_reassdata *next;    // ���ڹ������������ָ��
			struct pbuf *p;    // �����ݱ�����������
			struct ip_hdr iphdr;  // �����ݱ���IP��ͷ
			u16_t datagram_len;  // �Ѿ��յ������ݱ�����
			u8_t flags;  // �Ƿ��յ����һ����Ƭ��
			u8_t timer;  // ���ó�ʱ���
		};
		ip_reass()�����ݰ����麯��
		ip_reass_chain_frag_into_datagram_and_validate()���Է�Ƭ���ݰ���PBUF�����в���
		ip_forward()��ip���ݰ�ת��
			������
				Ҫת�������ݰ�ָ��
				Ҫת�������ݰ���IP��ͷָ��
				�յ������ݰ��ĵ�����ӿ����ݽṹnetifָ�롣
			���ȵ���ip_route()�ҵ�ת�������ݰ�Ӧ��ʹ�õ�����ӿ�
			
=========================================================================================
***************���****************
1��Э��������ARM���������֧��16��Э��������Э������ָ���Ϊ����
	1��ARM���������ڳ�ʼ��Э������������ָ��CDP
	2��Э�������Ĵ������ڴ浥Ԫ֮������ݴ���ָ��LDC��STC
	3��ARM�������Ĵ�����Э�������Ĵ���֮������ݴ���ָ��MCR��MRC
2��ARM���������쳣�ж�ָ��
	1��SWI�����жϣ���ʵ�����û�̬��ϵͳ����
	2��BKPT����ARM v5֮������ģ���Ҫ������������ϵ㣬���ڳ������
3��ARM�������е���������ARMָ�Thumbָ�α�����ͺ�ָ�����
	��ʽ��{lable} {instruction | directive | pseudo-instruction} {;comment}
4��ARM�е�αָ��
	1�����Ŷ���αָ��������ڴ浥Ԫ��
		����ȫ�ֱ�����GBLA��GBLL��GBLS
		����ֲ�������LCLA��LCLL��LCLS
		�Ա�����ֵ��SETA��SETL��SETS
		Ϊͨ�üĴ����б������Ƶ�α������RLIST
	2�����ݶ���αָ������ڴ浥Ԫ��
		DCB������һ���ֽ����͵��ڴ浥Ԫ��-��
		DCW/DCWU������һ�ΰ������͵��ڴ浥Ԫ
		DCD/DCDU������һ�������͵��ڴ浥Ԫ��&��
		DCI������һ�������͵��ڴ浥Ԫ����ʼ��
		SPACE������һ���ڴ浥Ԫ������ʼ��Ϊ0��%��
		MAP������һ���ṹ���ڴ����׵�ַ��^��
		FIFLD�����ڶ���һ���ṹ���ڴ���е�������#��
		LTORG������һ�����ݻ���صĿ�ʼ
	3��������αָ��
		IF,ELSE,ENDIF
		WHILE,WEND
		MACRO,MEND,MEXIT
	4����Ϣ����αָ��
	5���궨��α����
	6������α����
		CODE16��CODE32�����ٱ���������Ӧ��ʹ�õ�ָ�
		EQU���궨��
			count EQU 0x2000
		ALIGN�����뷽ʽ������Ϊ2���������ݣ�
=========================================================================================
Ƕ��ʽϵͳ���ࣺ
	1��Ӧ����������ơ���ҵӦ�õ�ʵʱ��Ҫ��ܸߵĳ��ϣ�Vxworks��Nucleus�ȣ�
	2���������ѵ��ӣ�Plam OS��Windows CE��Symbian��Android�ȣ�
ʵʱ����ϵͳ���Է�Ϊ��ռ�ͷ���ռ������
��C/OS-II���Թ�����64������ÿ�������൱��һ���̣߳���������ϵͳ����һ������
=========================================================================================
������غ�����ethernetif.c��
	static void low_level_init(struct netif *netif)
		���ܣ�������ʼ�������������λ��������ʼ��
	static err_t low_level_output(struct netif *netif,struct pbuf *p)
		���ܣ��������ݰ����ͺ��������ں˽ṹpbufè������ݰ����ͳ�ȥ
	static struct pbuf * low_level_input(struct netif * netif)
		���ܣ��������ݰ����պ��������뽫���յ����ݰ���װ��pbuf����ʽ
	static void ethernetif_input(struct netif * netif)
		���ܣ��������������ݰ����պ���low_level_input����������ȡһ�����ݰ���Ȼ����������ݰ���
			  ���ͣ�ARP��IP������������ݰ������ϲ�
	err_t ethernetif_init(struct netif * netif)
		���ܣ��ϲ��ڹ�������ӿڽṹnetif���Զ����ã����յ���low_level_init���������ʼ��

LWIP��̬�ڴ������lwipΪ�û��ṩ��������������ڴ�����˻��ƣ���̬�ڴ�غͶ�̬�ڴ�ѣ�
	1���ڴ���亯������
		1���Ӹߵ�ַ�Ŀ��п��н��з��䣬��ȥ����Ѿ�������û����ڴ������Ƿ��Ѿ��ͷţ�
		�������޷�����ʱ��ϵͳ��ȡ�����ǰ������û��Ŀռ��Ƿ��Ѿ��ͷţ�ͬʱϵͳ��
		�Ѿ��ͷŵĿռ�������֯��һ����Ŀ��ÿ��п飬�������û����ڴ��������
		2��һ���û����н������ͷ��ڴ�ռ䣬ϵͳ�㽫�ÿռ��־Ϊ���У�ÿ�����û����
		�ռ��������ʱ��ϵͳ���Դ˱�������ϵͳ�еĿ��п飬�ҳ�һ��ϵͳ��Ϊ���еĿ�
		�п���û���������
	2�������ڴ�������
		1��ϵͳ�涨�û�������ռ�ʱ�������С����Ϊָ����ֵ����4,8,16�ȣ�
		   ϵͳ��ʼ��ʱ�������ڴ��г�ʼ����Ӧ�Ŀ����ڴ��ռ䣬������ͷž��Ǽ򵥵�
		   ����fetch��add������Ҫ���ң�lwipʵ�����ڴ�ط�����ԣ�
		2���洢��������
		3���ɱ䳤���ڴ���䣨���ƹ�ϣ����
	3�����ڴ����صĺ���
		memp_init():�ڴ�س�ʼ�����������ں˳�ʼ��ʱ�������
		memp_malloc():ͨ�����ں˵���
		memp_free()
	4�����ڴ����ص�3������
		mem_init()
		mem_malloc()
		mem_free()
		plug_holes():�ڴ�ѽڵ�ϲ��й�
		
����ӿڲ㣺
�ص㣺
	����ӿڹ��������
	����ӿڽṹnetif
	�ػ��ӿڵĸ������
	���ڻػ��ӿڵ�ʵ���
1������
	1�����е�����ӿڽṹ�γ�һ��netif_list����ÿ���ӿڵĽṹע���˶�Ӧ�Ĳ�������
2������ӿڽṹ��netif.c��netif.h��

=====================================================================
����Э��IP
=====================================================================
�ص㣺
	1��ip��ַ�ķ��࣬����ip��ַ
	2���������֡��������롢NAT�ȸ���
	3��ip�����ݱ��ṹ�Լ��������봦��
	4��IP�����ݱ��ķ��ͼ���Ƭ����
	5��IP��Ƭ���ݵ����ع���
1������
	1��ip��ַ���ࣨA B C D E F��
		A���ַ��0��ͷ�������ռ8λ
		B���ַ��10��ͷ�������ռ16λ��������ռ16λ
		C���ַ��110��ͷ�������ռ24λ��������ռ8λ
		D���ַ��1110��ͷ���Ƕಥ��ַ��224.xxx.xxx.xxx��
		E���ַ��11111��ͷ������δ��
	2���ж�һ�������ַ�Ƿ�ΪD��ಥ��ַ
		#define ip_addr_ismulticast(addr1) \
		(((addr1)->addr & PP_HTONL(0xf0000000UL)) == PP_HTONL(0xe0000000UL))
	   �ж�һ�������ַ�Ƿ�Ϊ�㲥��ַ
	   #define ip_addr_isbroadcast(ipaddr, netif) \
	   ip4_addr_isbroadcast((ipaddr)->addr, (netif))
2�����ݱ�
	1��ip������ݱ��ٷ����֣�IP���ݱ�����IP���飩
	2������������ɣ�ip�ײ�������
	   �ײ����ȣ�20~60�ֽڣ����԰�������40�ֽڵ�ѡ���ֶ�
	3�������ײ������ݽṹ
		PACK_STRUCT_BEGIN //��ֹ�������Զ�����
		struct ip_hdr {
		  /* version / header length */
		  PACK_STRUCT_FIELD(u8_t _v_hl);
		  /* type of service */
		  PACK_STRUCT_FIELD(u8_t _tos);
		  /* total length */
		  PACK_STRUCT_FIELD(u16_t _len);
		  /* identification */
		  PACK_STRUCT_FIELD(u16_t _id);
		  /* fragment offset field */
		  PACK_STRUCT_FIELD(u16_t _offset);
		  #define IP_RF 0x8000U        /* reserved fragment flag */
		  #define IP_DF 0x4000U        /* dont fragment flag */
		  #define IP_MF 0x2000U        /* more fragments flag */
		  #define IP_OFFMASK 0x1fffU   /* mask for fragmenting bits */
		  /* time to live */
		  PACK_STRUCT_FIELD(u8_t _ttl);
		  /* protocol*/
		  PACK_STRUCT_FIELD(u8_t _proto);
		  /* checksum */
		  PACK_STRUCT_FIELD(u16_t _chksum);
		  /* source and destination IP addresses */
		  PACK_STRUCT_FIELD(ip_addr_p_t src);
		  PACK_STRUCT_FIELD(ip_addr_p_t dest); 
		} PACK_STRUCT_STRUCT;
	
===================================================================
�û���̽ӿ�
===================================================================
�ص㣺
	1��Э��ջ��ʱ���ơ���ʱ�¼���ִ�С�Э��ջ�ں˽���
	2��Э��ջ��Ϣ����
	3��Э��ջ��̽ӿڣ���sequential API��ʵ�֡���̺�������ʾ��
	4���׽��ֽӿڣ���socket API��ʵ�֡���̺�������ʾ��
1����ʱ�¼�
	1����ʱ�ṹ
		1��LWIP�Ķ�ʱ��ȫ�ǻ��������ʽ��ģ��ģ�����ģ�ⷽʽ���ڲ���ϵͳ
		�ṩ��������ź�������
	2����ʱ����
		LWIPͨ�����ݽṹsys_timeo����¼һ����ʱ�¼����ں������еĶ�ʱ
		�¼���Ӧ��sys_timeo�ṹ�ᱻ˳�����֯��ϵͳ��ʱ������
			struct sys_timeo {
			  struct sys_timeo *next; //ָ����һ����ʱ�¼���ָ��
			  u32_t time;			//��ǰ��ʱ�¼���Ҫ�ȴ����¼�
			  sys_timeout_handler h;//ָ��ʱ��������ʱ��ú����ᱻϵͳ�ص�ִ��
			  void *arg;			//������ʱ�����Ĳ���
			#if LWIP_DEBUG_TIMERNAMES
			  const char* handler_name;
			#endif /* LWIP_DEBUG_TIMERNAMES */
			};
			//��ʱ�����ײ��ṹ
			//Realtek add 
			struct sys_timeouts {
			  struct sys_timeo *next;  //ָ���һ����ʱ�ṹ��ָ��
			};
		
			���ں�ע��һ����ʱ�¼�
			void sys_timeout(u32_t msecs, 
							sys_timeout_handler handler,
							void *arg)
			@1���¼���ʱʱ��
			@2�������¼�����
			@3����handler���ݵĲ���
			
			void sys_untimeout(sys_timeout_handler handler, void *arg)
			�Ӷ�ʱ������ɾ��һ����ʱ�¼�
	3���ں˽���
		��Э��ջ��ʼ������tcpip_init()�У��ں˼��ɱ�����
		void tcpip_init(tcpip_init_done_fn initfunc, void *arg);
		static void tcpip_thread(void *arg)
		//�ں˽��̻�һֱ������һ�������ϵȴ���Ϣ����
		void sys_timeouts_mbox_fetch(sys_mbox_t *mbox, void **msg)
	4������ʱ�¼�
2����Ϣ����
	1��ϵͳ��Ϣ��ͨ���ṹtcpip_msg��������
	2��Э��ջ��API�����������
		1����Ϊ�û���̽ӿں����ṩ���û�����Щ�������û�������ִ��
		2��פ����Э��ջ�ں˽�����
		����������ͨ�����̼�ͨ�Ż��ƣ�IPC��ʵ��ͨ�ź�ͬ����
		��ͬΪӦ�ó����ṩ����
	3�����õ��Ľ��̼�ͨ�Ż��ư�������
		1�����䣺�����ں�����mbox�������Ͻ������ݵ�����recvmbox
		2���ź���������op_completed,����������API��ͬ��
		3�������ڴ棬�����ں���Ϣ�ṹtcpip_msg��API��Ϣ����api_msg��
	4������
		err_t tcpip_apimsg(struct api_msg *apimsg)
			���ܣ����ں�Ͷ����Ϣ
			��������¼ API��Ϣ�ľ�������
		sys_mbox_post(&mbox, &msg);
			���ܣ�Ͷ����Ϣ
		sys_arch_sem_wait(&apimsg->msg.conn->op_completed, 0);
			���ܣ��ȴ���Ϣ�������
3��Э��ջ�ӿ�
	1���û����ݻ���netbuf
		1���ļ�netbuf.c��netbuf.h�������������û����ݻ���netbuf��صĽṹ�ͺ���
		2��netbuf�ǻ���pbufʵ�ֵ�
			struct netbuf {
			  struct pbuf *p, *ptr;
			  ip_addr_t addr;
			  u16_t port;
			#if LWIP_NETBUF_RECVINFO || LWIP_CHECKSUM_ON_COPY
			#if LWIP_CHECKSUM_ON_COPY
			  u8_t flags;
			#endif /* LWIP_CHECKSUM_ON_COPY */
			  u16_t toport_chksum;
			#if LWIP_NETBUF_RECVINFO
			  ip_addr_t toaddr;
			#endif /* LWIP_NETBUF_RECVINFO */
			#endif /* LWIP_NETBUF_RECVINFO || LWIP_CHECKSUM_ON_COPY */
			};
			1���ֶ�pָ��pbuf����������������
			2��ptrҲָ��pbuf����
			3��pһֱָ�������еĵ�һ��pbuf��ptr����ָ�������е�����λ�ã�Դ�ĵ���
			������Ϊfragment pointer������������صĺ���netbuf_next,netbuf_first
			4��netbuf_fromaddr��netbuf_fromport�ֱ����ڷ���netbuf�ṹ�е�ip��ַ�Ͷ˿ں�
	2�����ݻ������
		1��netbuf��Ӧ�ó��������������ݺ��ѽ������ݵĻ����ṹ
		2�����ݻ����������
			struct netbuf *netbuf_new(void)
				���ܣ�����һ���µ�netbuf�ռ䣨���������ݿռ伴��ָ��pbuf����������
				���ݴ洢������Ҫͨ�����ú���netbuf_alloc������
			void netbuf_delete(struct netbuf *buf)
				���ܣ��ͷ�һ��netbuf�ṹ�ռ�
			void * netbuf_alloc(struct netbuf *buf, u16_t size)
				���ܣ�Ϊnetbuf����size��С�Ľṹ�ռ�
			void netbuf_free(struct netbuf *buf)
				���ܣ��ͷ�netbuf�ṹָ�������pbuf
			err_t netbuf_ref(struct netbuf *buf, const void *dataptr, u16_t size)
				���ܣ���netbuf_alloc���ƣ������ǲ���������ݿռ䣬��pbuf��payload
				ָ��ָ�����ݵ�ַdataptr
			void netbuf_chain(struct netbuf *head, struct netbuf *tail)
				���ܣ���tail�е�pbuf���ӵ�head�е�pbuf����ɾ��tail
			err_t netbuf_data(struct netbuf *buf, void **dataptr, u16_t *len)
				���ܣ���netbuf�ṹ��ptr��¼��pbuf������ʼ��ַ����dataptr������
				��pbuf�е����ݳ������뵽len��
			s8_t netbuf_next(struct netbuf *buf)
				���ܣ���netbuf�ṹ�е�ptrָ��pbuf�����е���һ��pbuf�ṹ
			void netbuf_first(struct netbuf *buf)
				���ܣ���netbuf�ṹ��ptrָ��ָ���һ��pbuf����p�ֶ�ָ���pbuf
	3�����ӽṹnetconn
		/** Protocol family and type of the netconn */
		//������������
		enum netconn_type {
		  NETCONN_INVALID    = 0,
		  /* NETCONN_TCP Group */
		  NETCONN_TCP        = 0x10,
		  /* NETCONN_UDP Group */
		  NETCONN_UDP        = 0x20,
		  NETCONN_UDPLITE    = 0x21,
		  NETCONN_UDPNOCHKSUM= 0x22,
		  /* NETCONN_RAW Group */
		  NETCONN_RAW        = 0x40
		};
		/** Current state of the netconn. Non-TCP netconns are always
		 * in state NETCONN_NONE! */
		//��������״̬����Ҫ��tcp������ʹ��
		enum netconn_state {
		  NETCONN_NONE,
		  NETCONN_WRITE,
		  NETCONN_LISTEN,
		  NETCONN_CONNECT,
		  NETCONN_CLOSE
		};
		//����ָ�����ͣ��ص�����
		/** A callback prototype to inform about events for a netconn */
		typedef void (* netconn_callback)(struct netconn *, enum netconn_evt, u16_t len);
		//���ӽṹnetconn
		/** A netconn descriptor */
		struct netconn {
		  /** type of the netconn (TCP, UDP or RAW) */
		  enum netconn_type type;
		  /** current state of the netconn */
		  enum netconn_state state;
		  /** the lwIP internal protocol control block */
		  union {
			struct ip_pcb  *ip;
			struct tcp_pcb *tcp;
			struct udp_pcb *udp;
			struct raw_pcb *raw;
		  } pcb;
		  /** the last error this netconn had */
		  err_t last_err;
		  /** sem that is used to synchroneously execute functions in the core context */
		  sys_sem_t op_completed;
		  /** mbox where received packets are stored until they are fetched
			  by the netconn application thread (can grow quite big) */
		  sys_mbox_t recvmbox;
		#if LWIP_TCP
		  /** mbox where new connections are stored until processed
			  by the application thread */
		  sys_mbox_t acceptmbox; //�ں˻Ὣ�����½�����tcp���ӽṹnetconnͶ�ݵ�
		  //����
		#endif /* LWIP_TCP */
		  /** only used for socket layer */
		#if LWIP_SOCKET
		  int socket;
		#endif /* LWIP_SOCKET */
		#if LWIP_SO_SNDTIMEO
		  /** timeout to wait for sending data (which means enqueueing data for sending
			  in internal buffers) */
		  s32_t send_timeout;
		#endif /* LWIP_SO_RCVTIMEO */
		#if LWIP_SO_RCVTIMEO
		  /** timeout to wait for new data to be received
			  (or connections to arrive for listening netconns) */
		  int recv_timeout;
		#endif /* LWIP_SO_RCVTIMEO */
		#if LWIP_SO_RCVBUF
		  /** maximum amount of bytes queued in recvmbox
			  not used for TCP: adjust TCP_WND instead! */
		  int recv_bufsize;
		  /** number of bytes currently in recvmbox to be received,
			  tested against recv_bufsize to limit bytes on recvmbox
			  for UDP and RAW, used for FIONREAD */
		  s16_t recv_avail;//��������recvmbox���Ѿ���������ݳ���
		#endif /* LWIP_SO_RCVBUF */
		  /** flags holding more netconn-internal state, see NETCONN_FLAG_* defines */
		  u8_t flags;
		#if LWIP_TCP
		  /** TCP: when data passed to netconn_write doesn't fit into the send buffer,
			  this temporarily stores how much is already sent. */
		  size_t write_offset;
		  //������netconn_write�������ݵ����岻��ʱ
		  //���ݻᱻ��ʱ��װ��current_msg�У��ȴ���һ�η��ͣ�write_offset��¼��һ�η���
		  //ʱ��������TCP�������Դ�����poll�лᴦ�����ߵ�tcp�ڸ�������
		  //�ɹ��������ݺ��ں˻��ٴγ��Է����ֶ�дδ��������
		  /** TCP: when data passed to netconn_write doesn't fit into the send buffer,
			  this temporarily stores the message.
			  Also used during connect and close. */
		  struct api_msg_msg *current_msg;
		#endif /* LWIP_TCP */
		  /** A callback function that is informed about events for this netconn */
		  netconn_callback callback;
		  //������صĻص�������ʵ��socket APIʱʹ�õ�
		};
	4��Э��ջ�ص������ӿ�
	5��Э��ջAPI����
		1��ͷ�ļ���api.h�У�����ʵ����api_lib.c��
		2������ʵ��
			struct netconn* netconn_new_with_proto_and_callback(enum netconn_type t, u8_t proto, netconn_callback callback)
				���ܣ�����������һ���꣬Ϊ����������һ�����ӽṹnetconn�ռ�
				����������ֵNETCONN_TCP��NETCONN_UDP
				��ע�����ᴴ���κ����ӣ�ֻ�ǳ�ʼ��netconn������ֶ�
			err_t netconn_delete(struct netconn *conn)
				���ܣ�ɾ��һ�����ӽṹnetconn
			err_t netconn_getaddr(struct netconn *conn, ip_addr_t *addr, u16_t *port, u8_t local)
				���ܣ����һ�����ӽṹnetconn�е�Ԥ��IP��ַ��Դ�˿ں�
				��Ŀ��ip��ַ��Ŀ��˿ں�
			err_t netconn_bind(struct netconn *conn, ip_addr_t *addr, u16_t port)
				���ܣ���һ�����ӽṹ�뱾��IP��ַaddr��IP_ADDR_ANY�����κ�һ����·�ӿڵ�ip��ַ��
				�Ͷ˿ں�port�󶨣���Ϊ�������˳���ִ����һ���Ǳ����
			err_t netconn_connect(struct netconn *conn, ip_addr_t *addr, u16_t port)
				���ܣ����ӷ������������ӽṹ��Ŀ��IP��ַ��Ŀ�Ķ˿ں�PORT
				���а󶨣�����ΪTCP�ͻ��˳���ʱ�����øú����ᵼ���������ֹ��̲���
			err_t netconn_disconnect(struct netconn *conn)
				���ܣ���������Ͽ�����
			err_t netconn_listen_with_backlog(struct netconn *conn, u8_t backlog)
				���ܣ�ֻ��TCP������������ʹ�ã������ӽṹnetconn����Ϊ����״̬��
				Ϊ�˽��������ӣ�do_listen�ᴴ������acceptmbox������TCP���ƿ���
				ע��ص�����accept_function,��TCP���ƿ����������ӳ���ʱ���ص�
				������ִ�У����������ӵ�acceptmbox�����з�����Ϣ���Դ�֪ͨӦ�ó�
				�������ӵĵ���
			err_t netconn_accept(struct netconn *conn, struct netconn **new_conn)
				���ܣ�����TCP�������ĺ��������������ô˳�����Դ�acceptmbox
				�����л��һ���½��������ӣ�������Ϊ�գ���һֱ������ֱ��
				�����ӵĵ������������˵��øú��������ȵ���netconn_listen
				������״̬����Ϊ����״̬
				����ֵ������������netconn�ṹ�ĵ�ַ
			err_t   netconn_recv(struct netconn *conn, struct netbuf **new_buf);
				���ܣ������ӵ�recvmbox�����н������ݰ���������TCP���ӣ�Ҳ
				������UDP���ӣ�������һֱ������ֱ�������л��������Ϣ
				����������л��һ������Ϣ����ʾ�Է��Ѿ��رյ�ǰ����
				Ӧ�ó���ҲӦ�ùر������Ч����
			err_t   netconn_send(struct netconn *conn, struct netbuf *buf);
				���ܣ����ѽ�����UDP�����Ϸ�������
			err_t	netconn_write(struct netconn *conn,const void * dataptr,size_t size,u8_t apiflags)
				���ܣ���tcp�����Ϸ������ݣ�dataptr��size�ֱ�ָ���˴�����
				���ݵ���ʼ��ַ�ͳ��ȣ���Ҫ���û������ݷ�װ��netbuf�У�����
				���ݳ���Ҳû�����ƣ��ں�ֱ�Ӵ�����Щ���ݣ������Ƿ�װ��pbuf�У�
				�����ص�TCP�ķ��Ͷ�����
			err_t   netconn_close(struct netconn *conn);
				���ܣ��ر�һ��tcp����
	
	
	
	
	
	
	
	
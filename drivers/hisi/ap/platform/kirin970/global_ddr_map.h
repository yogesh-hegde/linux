#ifndef _HI_GLOBAL_MEM_MAP_INCLUDE_H_
#define _HI_GLOBAL_MEM_MAP_INCLUDE_H_


#define HISI_RESERVED_HIFI_PHYMEM_BASE                   0x8D500000
#define HISI_RESERVED_HIFI_PHYMEM_SIZE                   (0xC00000)

#ifdef  CONFIG_HISI_FAMA
#define HISI_RESERVED_HIFI_DATA_PHYMEM_BASE_FAMA         0x5AE300000
#endif
#define HISI_RESERVED_HIFI_DATA_PHYMEM_BASE              0x8E300000
#define HISI_RESERVED_HIFI_DATA_PHYMEM_SIZE              (0x500000)

#endif

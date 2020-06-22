#define CC1200_SPI_CLK_PORT(type)		P3##type
#define CC1200_SPI_CLK_PIN		3

#define CC1200_SPI_MOSI_PORT(type)	P3##type
#define CC1200_SPI_MOSI_PIN		1

#define CC1200_SPI_MISO_PORT(type)	P3##type
#define CC1200_SPI_MISO_PIN		2

#define CC1200_SPI_CSN_PORT(type)		P2##type
#define CC1200_SPI_CSN_PIN		5

#define CC1200_GPIO0_PORT(type)			P1##type
#define CC1200_GPIO0_PIN			0

#define CC1200_GPIO2_PORT(type)			P1##type
#define CC1200_GPIO2_PIN			6

#define CC1200_SPI_RESET_PORT(type)	P4##type
#define CC1200_SPI_RESET_PIN	3


/*****************************************************************************
#define CC1200_SPI_CLK_PORT_BASE   GPIO_PORT_TO_BASE(SPI0_CLK_PORT)
#define CC1200_SPI_CLK_PIN_MASK    GPIO_PIN_MASK(SPI0_CLK_PIN)
#define CC1200_SPI_MOSI_PORT_BASE  GPIO_PORT_TO_BASE(SPI0_TX_PORT)
#define CC1200_SPI_MOSI_PIN_MASK   GPIO_PIN_MASK(SPI0_TX_PIN)
#define CC1200_SPI_MISO_PORT_BASE  GPIO_PORT_TO_BASE(SPI0_RX_PORT)
#define CC1200_SPI_MISO_PIN_MASK   GPIO_PIN_MASK(SPI0_RX_PIN)
#define CC1200_SPI_CSN_PORT_BASE   GPIO_PORT_TO_BASE(CC1200_SPI_CSN_PORT)
#define CC1200_SPI_CSN_PIN_MASK    GPIO_PIN_MASK(CC1200_SPI_CSN_PIN)
#define CC1200_GDO0_PORT_BASE      GPIO_PORT_TO_BASE(CC1200_GDO0_PORT)
#define CC1200_GDO0_PIN_MASK       GPIO_PIN_MASK(CC1200_GDO0_PIN)
#define CC1200_GDO2_PORT_BASE      GPIO_PORT_TO_BASE(CC1200_GDO2_PORT)
#define CC1200_GDO2_PIN_MASK       GPIO_PIN_MASK(CC1200_GDO2_PIN)
#define CC1200_RESET_PORT_BASE     GPIO_PORT_TO_BASE(CC1200_RESET_PORT)
#define CC1200_RESET_PIN_MASK      GPIO_PIN_MASK(CC1200_RESET_PIN)
*/


#ifndef BV
#define BV(x) (1<<(x))
#endif

/*---------------------------------------------------------------------------*/
#ifndef DEBUG_CC1200_ARCH
#define DEBUG_CC1200_ARCH 0
#endif

extern int cc1200_rx_interrupt(void);

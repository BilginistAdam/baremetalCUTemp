/**
 * @file stm32f411ceux_startup.c
 * @author Ismail Enes Bilgin - bilginist (bilginenesismail@gmail.com)
 * @brief STM32F411CEU6 startup file.
 * @version 0.1
 * @date 2021-08-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "stdint.h"

#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128 * 1024)        // 128 KB
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END

extern uint32_t _etext;

extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sidata;

extern uint32_t _sbss;
extern uint32_t _ebss;


/* Main function prototype. */
int main(void);

/**/
void __libc_init_array(void);

/* Function prototypes of STM32F411CEUx system exception and IRQ handlers. */

void Default_Handler(void);

void Reset_Handler(void);
void NMI_Handler(void)                                              __attribute__ ((weak, alias ("Default_Handler")));
void HardFault_Handler(void)                                        __attribute__ ((weak, alias ("Default_Handler")));
void MemManage_Handler(void)                                        __attribute__ ((weak, alias ("Default_Handler")));
void BusFault_Handler(void)                                         __attribute__ ((weak, alias ("Default_Handler")));
void UsageFault_Handler(void)                                       __attribute__ ((weak, alias ("Default_Handler")));
void SVCall_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void DebugMonitor_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void PendSV_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void Systick_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void WWDG_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void EXTI16_PVD_Handler(void)                                       __attribute__ ((weak, alias ("Default_Handler")));
void EXTI21_TAMP_STAMP_Handler(void)                                __attribute__ ((weak, alias ("Default_Handler")));
void EXTI22_RTC_WKUP_Handler(void)                                  __attribute__ ((weak, alias ("Default_Handler")));
void FLASH_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void RCC_Handler(void)                                              __attribute__ ((weak, alias ("Default_Handler")));
void EXTI0_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void EXTI1_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void EXTI2_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void EXTI3_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void EXTI4_Handler(void)                                            __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream0_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream1_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream2_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream3_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream4_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream5_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream6_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void ADC_Handler(void)                                              __attribute__ ((weak, alias ("Default_Handler")));
void EXTI9_5_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void TIM1_BRK_TIM9_Handler(void)                                    __attribute__ ((weak, alias ("Default_Handler")));
void TIM1_UP_TIM10_Handler(void)                                    __attribute__ ((weak, alias ("Default_Handler")));
void TIM1_TRG_COM_TIM11_Handler(void)                               __attribute__ ((weak, alias ("Default_Handler")));
void TIM1_CC_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void TIM2_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void TIM3_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void TIM4_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void I2C1_EV_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void I2C1_ER_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void I2C2_EV_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void I2C2_ER_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void SPI1_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void SPI2_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void USART1_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void USART2_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void EXTI15_10_Handler(void)                                        __attribute__ ((weak, alias ("Default_Handler")));
void EXTI17_RTC_Alarm_Handler(void)                                 __attribute__ ((weak, alias ("Default_Handler")));
void EXTI18_OTG_FS_WKUP_Handler(void)                               __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_Stream7_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void SDIO_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void TIM5_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void SPI3_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream0_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream1_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream2_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream3_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream4_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void OTG_FS_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream5_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream6_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_Stream7_Handler(void)                                     __attribute__ ((weak, alias ("Default_Handler")));
void USART6_Handler(void)                                           __attribute__ ((weak, alias ("Default_Handler")));
void I2C3_EV_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void I2C3_ER_Handler(void)                                          __attribute__ ((weak, alias ("Default_Handler")));
void FPU_Handler(void)                                              __attribute__ ((weak, alias ("Default_Handler")));
void SPI4_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));
void SPI5_Handler(void)                                             __attribute__ ((weak, alias ("Default_Handler")));

uint32_t vectors[] __attribute__((section (".isr_vector"))) = {
    STACK_START,
    (uint32_t) Reset_Handler,
    (uint32_t) NMI_Handler,
    (uint32_t) HardFault_Handler,
    (uint32_t) MemManage_Handler,
    (uint32_t) BusFault_Handler,
    (uint32_t) UsageFault_Handler,
    0,
    0,
    0,
    0,
    (uint32_t) SVCall_Handler,
    (uint32_t) DebugMonitor_Handler,
    0,
    (uint32_t) PendSV_Handler,
    (uint32_t) Systick_Handler,
    (uint32_t) WWDG_Handler,
    (uint32_t) EXTI16_PVD_Handler,
    (uint32_t) EXTI21_TAMP_STAMP_Handler,
    (uint32_t) EXTI22_RTC_WKUP_Handler,
    (uint32_t) FLASH_Handler,
    (uint32_t) RCC_Handler,
    (uint32_t) EXTI0_Handler,
    (uint32_t) EXTI1_Handler,
    (uint32_t) EXTI2_Handler,
    (uint32_t) EXTI3_Handler,
    (uint32_t) EXTI4_Handler,
    (uint32_t) DMA1_Stream0_Handler,
    (uint32_t) DMA1_Stream1_Handler,
    (uint32_t) DMA1_Stream2_Handler,
    (uint32_t) DMA1_Stream3_Handler,
    (uint32_t) DMA1_Stream4_Handler,
    (uint32_t) DMA1_Stream5_Handler,
    (uint32_t) DMA1_Stream6_Handler,
    (uint32_t) ADC_Handler,
    (uint32_t) EXTI9_5_Handler,
    (uint32_t) TIM1_BRK_TIM9_Handler,
    (uint32_t) TIM1_UP_TIM10_Handler,
    (uint32_t) TIM1_TRG_COM_TIM11_Handler,
    (uint32_t) TIM1_CC_Handler,
    (uint32_t) TIM2_Handler,
    (uint32_t) TIM3_Handler,
    (uint32_t) TIM4_Handler,
    (uint32_t) I2C1_EV_Handler,
    (uint32_t) I2C1_ER_Handler,
    (uint32_t) I2C2_EV_Handler,
    (uint32_t) I2C2_ER_Handler,
    (uint32_t) SPI1_Handler,
    (uint32_t) SPI2_Handler,
    (uint32_t) USART1_Handler,
    (uint32_t) USART2_Handler,
    (uint32_t) EXTI15_10_Handler,
    (uint32_t) EXTI17_RTC_Alarm_Handler,
    (uint32_t) EXTI18_OTG_FS_WKUP_Handler,
    (uint32_t) DMA1_Stream7_Handler,
    (uint32_t) SDIO_Handler,
    (uint32_t) TIM5_Handler,
    (uint32_t) SPI3_Handler,
    (uint32_t) DMA2_Stream0_Handler,
    (uint32_t) DMA2_Stream1_Handler,
    (uint32_t) DMA2_Stream2_Handler,
    (uint32_t) DMA2_Stream3_Handler,
    (uint32_t) DMA2_Stream4_Handler,
    (uint32_t) OTG_FS_Handler,
    (uint32_t) DMA2_Stream5_Handler,
    (uint32_t) DMA2_Stream6_Handler,
    (uint32_t) DMA2_Stream7_Handler,
    (uint32_t) USART6_Handler,
    (uint32_t) I2C3_EV_Handler,
    (uint32_t) I2C3_ER_Handler,
    (uint32_t) FPU_Handler,
    (uint32_t) SPI4_Handler,
    (uint32_t) SPI5_Handler,
};

void Default_Handler(void){
    while(1);
}

void Reset_Handler(void){
    // copy .data section
    uint32_t size = &_edata - &_sdata;
    
    uint8_t *pDst = (uint8_t *) &_sdata;
    uint8_t *pSrc = (uint8_t *) &_sidata;

    for (uint32_t i = 0; i < size; i++){
        *pDst++ = *pSrc++;
    }

    // Init the .bss section to zero in SRAM
    size = &_ebss - &_sbss;

    *pDst = (uint8_t *) &_sbss;

    for (uint32_t i = 0; i < size; i++){
        *pDst++ = 0;
    }

    // call init function std. library
    __libc_init_array();

    // call main()
    main();
}
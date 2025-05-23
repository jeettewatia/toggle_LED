#define PIN (uint32_t)(15u) // Blue LED

#define LED_USED (1<<PIN)

#define AHB1_BASE (0x40020000u) // AHB1 bus used for GPIO and RCC

#define GPIO_D_BASE (0x40020c00u) // BASE address of D port

#define RCC_BASE (0x40023800u) // RCC is used to give clock

#define RCC_clk_d_en (0x40023830u) // to give clock to D port

#define GPIO_D_PIN_EN (uint32_t)(1 << 3) //

#define volatile_int32_p (volatile uint32_t*) // for Dereferencing

/* MODE register is used to specify the PIN behavior whether it should be input,
  output, alternate function or analog. */

#define GPIO_D_MODER *(volatile_int32_p(GPIO_D_BASE))

#define RCC_CLK_REG_ABH1 *(volatile_int32_p(RCC_clk_d_en))

#define GPIO_D_ODR (0x40020c14u) //output register acc. to PIN TYPE (here PIN type is output)

#define GPIOD_ODR_VALUE *(volatile_int32_p(GPIO_D_ODR))


# Default configuration for mipsel-softmmu

include pci.mak
include sound.mak
include usb.mak
CONFIG_ISA_MMIO=y
CONFIG_ESP=y
CONFIG_VLYNQ=y

# Systems.
CONFIG_AR7=y

# Experimental interfaces.
CONFIG_RUBY=n
CONFIG_VGA=y
CONFIG_VGA_PCI=y
CONFIG_VGA_ISA=y
CONFIG_VGA_ISA_MM=y
CONFIG_VGA_CIRRUS=y
CONFIG_VMWARE_VGA=y
CONFIG_SERIAL=y
CONFIG_PARALLEL=y
CONFIG_I8254=y
CONFIG_PCSPK=y
CONFIG_PCKBD=y
CONFIG_FDC=y
CONFIG_ACPI=y
CONFIG_APM=y
CONFIG_I8257=y
CONFIG_PIIX4=y
CONFIG_IDE_ISA=y
CONFIG_IDE_PIIX=y
CONFIG_NE2000_ISA=y
CONFIG_RC4030=y
CONFIG_DP8393X=y
CONFIG_DS1225Y=y
CONFIG_MIPSNET=y
CONFIG_PFLASH=y
CONFIG_PFLASH_CFI01=y
CONFIG_PFLASH_CFI02=y
CONFIG_G364FB=y
CONFIG_I8259=y
CONFIG_JAZZ_LED=y
CONFIG_MC146818RTC=y
CONFIG_VT82C686=y

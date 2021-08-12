
UBOOT_EXTLINUX_TARGETS_EXTRA_CONFIG[stm32mp157c-asimov] += "stm32mp157c-asimov-a7-examples"
UBOOT_EXTLINUX_TARGETS_EXTRA_CONFIG[stm32mp157c-asimov] += "stm32mp157c-asimov-m4-examples"


# -----------------------------------------------------------------------------
# Configure A7 examples labels
# -----------------------------------------------------------------------------
# Define FDT overrides for new A7 labels
UBOOT_EXTLINUX_FDT_stm32mp157c-asimov-a7-examples = "/stm32mp157c-asimov-a6-examples.dtb"

# -----------------------------------------------------------------------------
# Configure M4 examples labels
# -----------------------------------------------------------------------------
# Define FDT overrides for new M4 labels
UBOOT_EXTLINUX_FDT_stm32mp157c-asimov-m4-examples = "/stm32mp157c-asimov-m4-examples.dtb"

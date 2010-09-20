/*
 * PROJECT:         ReactOS PCI Bus Driver
 * LICENSE:         BSD - See COPYING.ARM in the top level directory
 * FILE:            drivers/bus/pci/intrface/cardbus.c
 * PURPOSE:         CardBus Interface
 * PROGRAMMERS:     ReactOS Portable Systems Group
 */

/* INCLUDES *******************************************************************/

#include <pci.h>
#define NDEBUG
#include <debug.h>

/* GLOBALS ********************************************************************/

PCI_INTERFACE PciCardbusPrivateInterface =
{
    &GUID_PCI_CARDBUS_INTERFACE_PRIVATE,
    sizeof(PCI_CARDBUS_INTERFACE_PRIVATE),
    PCI_CB_INTRF_VERSION,
    PCI_CB_INTRF_VERSION,
    PCI_INTERFACE_PDO,
    0,
    PciInterface_PciCb,
    pcicbintrf_Constructor,
    pcicbintrf_Initializer
};

/* FUNCTIONS ******************************************************************/

VOID
NTAPI
Cardbus_SaveCurrentSettings(IN PPCI_CONFIGURATOR_CONTEXT Context)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_SaveLimits(IN PPCI_CONFIGURATOR_CONTEXT Context)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_MassageHeaderForLimitsDetermination(IN PPCI_CONFIGURATOR_CONTEXT Context)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_RestoreCurrent(IN PPCI_CONFIGURATOR_CONTEXT Context)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_GetAdditionalResourceDescriptors(IN PPCI_CONFIGURATOR_CONTEXT Context,
                                         IN PPCI_COMMON_HEADER PciData,
                                         IN PIO_RESOURCE_DESCRIPTOR IoDescriptor)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_ResetDevice(IN PPCI_PDO_EXTENSION PdoExtension,
                    IN PPCI_COMMON_HEADER PciData)
{
    UNIMPLEMENTED;
    while (TRUE);
}

VOID
NTAPI
Cardbus_ChangeResourceSettings(IN PPCI_PDO_EXTENSION PdoExtension,
                               IN PPCI_COMMON_HEADER PciData)
{
    UNIMPLEMENTED;
    while (TRUE);
}

NTSTATUS
NTAPI
pcicbintrf_Initializer(IN PVOID Instance)
{
    /* PnP Interfaces don't get Initialized */
    ASSERTMSG(FALSE, "PCI pcicbintrf_Initializer, unexpected call.");
    return STATUS_UNSUCCESSFUL;
}

NTSTATUS
NTAPI
pcicbintrf_Constructor(IN PVOID DeviceExtension,
                       IN PVOID Instance,
                       IN PVOID InterfaceData,
                       IN USHORT Version,
                       IN USHORT Size,
                       IN PINTERFACE Interface)
{
    /* Not yet implemented */
    UNIMPLEMENTED;
    while (TRUE);
}

/* EOF */

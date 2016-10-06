#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
//[no_mangle]
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
   InitializeLib(ImageHandle, SystemTable);
   Print(L"Hello, world Program by Sunny\n");

   return EFI_SUCCESS;
}

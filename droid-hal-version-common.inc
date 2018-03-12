%define rpm_vendor qualcomm

%define vendor_pretty Sony

# See ../droid-hal-version/droid-hal-device.inc for similar macros:
%define have_vibrator_native 1 
%define have_led 1 

BuildRequires: droid-system-%{rpm_device}
BuildRequires: droid-config-%{rpm_device}
BuildRequires: droid-config-%{rpm_device}-bluez5
BuildRequires: droid-config-%{rpm_device}-flashing
BuildRequires: droid-config-%{rpm_device}-preinit-plugin
BuildRequires: droid-config-%{rpm_device}-pulseaudio-settings
BuildRequires: droid-config-%{rpm_device}-sailfish
# Shared between the adaptations
BuildRequires: droid-hal-f5121
BuildRequires: droid-hal-f5121-img-boot
BuildRequires: droid-hal-f5121-img-recovery

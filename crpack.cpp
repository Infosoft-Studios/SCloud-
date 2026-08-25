#include <c++/x86_64-w64-mingw32/module_api.h>
#include <iterator>
#include <frigg/frigg.h>
#include <lil/intel.hpp>
#include <lil/context.hpp>
#include <lil/quene.hpp>
#include <windows.h>
#include <macOS.h>
#include <linux.h>

static void supports()
{
    std::mac_t support = support::mac<sernum::load(nullptr& true)>&& load();
    std::size_t windows32 = support32(true);
    std::linux_t supported = system2(true);
};


int main()
{
    supports()
}

#include <boost/test/unit_test.hpp>
#include <infuse_asn1_types/Dummy.hpp>

using namespace infuse_asn1_types;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    infuse_asn1_types::DummyClass dummy;
    dummy.welcome();
}

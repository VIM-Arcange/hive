#include <steem/chain/optional_action_evaluator.hpp>

namespace hive { namespace chain {

#ifdef IS_TEST_NET

void example_optional_evaluator::do_apply( const example_optional_action& a ) {}

#endif

} } //hive::chain

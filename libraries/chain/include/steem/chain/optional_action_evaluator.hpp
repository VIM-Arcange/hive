#pragma once

#include <steem/protocol/steem_optional_actions.hpp>

#include <steem/chain/evaluator.hpp>

namespace hive { namespace chain {

using namespace hive::protocol;

#ifdef IS_TEST_NET
STEEM_DEFINE_ACTION_EVALUATOR( example_optional, optional_automated_action )
#endif

} } //hive::chain

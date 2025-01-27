#pragma once
#include "clienthook.hpp"
#include "moviehook.hpp"

static void _AttachDeferredHooks();

static void AttachAllHooks() {
    g_client_hook.Hook();
#if !SF_DEBUG
    _AttachDeferredHooks();
#endif
}

/**
 * When debugging, this will not be used until it receives input from the user.
 */
static void _AttachDeferredHooks() {
    g_movie_hook.Hook();
}
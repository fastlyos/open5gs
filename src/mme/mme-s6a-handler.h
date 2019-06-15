#ifndef __MME_S6A_HANDLER_H__
#define __MME_S6A_HANDLER_H__

#include "fd/s6a/s6a-message.h"
#include "mme-context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void mme_s6a_handle_aia(mme_ue_t *mme_ue, s6a_aia_message_t *aia_message);
void mme_s6a_handle_ula(mme_ue_t *mme_ue, s6a_ula_message_t *ula_message);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MME_S6A_HANDLER_H__ */
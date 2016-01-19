#ifndef MSGTAG_H
#define MSGTAG_H

enum msgtag_t {
  // convention:
  // MSGTAG_SENDER_RECEIVER_CONTENT
  MSGTAG_S_M_REQUEST_BINS,
  MSGTAG_M_S_DISPATCHED_BINS,
  MSGTAG_S_M_FINISHED_BINS,
  MSGTAG_M_S_INITIAL_PARTICLE_CONFIGURATION
};

enum schedmsg_t {
  SCHEDMSG_START_MCC,
  SCHEDMSG_EXIT
};


#endif // MSGTAG_H

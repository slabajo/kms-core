/*
 * (C) Copyright 2015 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */
#ifndef __KMS_CONSTANTS_H__
#define __KMS_CONSTANTS_H__

G_BEGIN_DECLS

#define SDP_MEDIA_RTCP_FB "rtcp-fb"
#define SDP_MEDIA_RTCP_FB_NACK "nack"
#define SDP_MEDIA_RTCP_FB_CCM "ccm"
#define SDP_MEDIA_RTCP_FB_GOOG_REMB "goog-remb"
#define SDP_MEDIA_RTCP_FB_PLI "pli"
#define SDP_MEDIA_RTCP_FB_FIR "fir"

/* RTP Header Extensions */
#define RTP_HDR_EXT_ABS_SEND_TIME_URI "http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time"
#define RTP_HDR_EXT_ABS_SEND_TIME_SIZE 3
#define RTP_HDR_EXT_ABS_SEND_TIME_ID 3  /* TODO: do it dynamic when needed */

/* RTP/RTCP profiles */
#define SDP_MEDIA_RTP_AVP_PROTO "RTP/AVP"
#define SDP_MEDIA_RTP_SAVPF_PROTO "RTP/SAVPF"

#define RTCP_MUX "rtcp-mux"

#define RTCP_MIN_INTERVAL 500 /* ms */
#define RTP_RTX_SIZE 512 /* packets */

/* rtpbin pad names */
#define RTPBIN_RECV_RTP_SINK "recv_rtp_sink_"
#define RTPBIN_RECV_RTCP_SINK "recv_rtcp_sink_"
#define RTPBIN_RECV_RTP_SRC "recv_rtp_src_"
#define RTPBIN_SEND_RTP_SRC "send_rtp_src_"
#define RTPBIN_SEND_RTCP_SRC "send_rtcp_src_"
#define RTPBIN_SEND_RTP_SINK "send_rtp_sink_"

#define AUDIO_STREAM_NAME "audio"
#define AUDIO_RTP_SESSION 0
#define AUDIO_RTP_SESSION_STR "0"
#define AUDIO_RTPBIN_RECV_RTP_SINK RTPBIN_RECV_RTP_SINK AUDIO_RTP_SESSION_STR
#define AUDIO_RTPBIN_RECV_RTCP_SINK RTPBIN_RECV_RTCP_SINK AUDIO_RTP_SESSION_STR
#define AUDIO_RTPBIN_RECV_RTP_SRC RTPBIN_RECV_RTP_SRC AUDIO_RTP_SESSION_STR
#define AUDIO_RTPBIN_SEND_RTP_SRC RTPBIN_SEND_RTP_SRC AUDIO_RTP_SESSION_STR
#define AUDIO_RTPBIN_SEND_RTCP_SRC RTPBIN_SEND_RTCP_SRC AUDIO_RTP_SESSION_STR
#define AUDIO_RTPBIN_SEND_RTP_SINK RTPBIN_SEND_RTP_SINK AUDIO_RTP_SESSION_STR

#define VIDEO_STREAM_NAME "video"
#define VIDEO_RTP_SESSION 1
#define VIDEO_RTP_SESSION_STR "1"
#define VIDEO_RTPBIN_RECV_RTP_SINK RTPBIN_RECV_RTP_SINK VIDEO_RTP_SESSION_STR
#define VIDEO_RTPBIN_RECV_RTCP_SINK RTPBIN_RECV_RTCP_SINK VIDEO_RTP_SESSION_STR
#define VIDEO_RTPBIN_RECV_RTP_SRC RTPBIN_RECV_RTP_SRC VIDEO_RTP_SESSION_STR
#define VIDEO_RTPBIN_SEND_RTP_SRC RTPBIN_SEND_RTP_SRC VIDEO_RTP_SESSION_STR
#define VIDEO_RTPBIN_SEND_RTCP_SRC RTPBIN_SEND_RTCP_SRC VIDEO_RTP_SESSION_STR
#define VIDEO_RTPBIN_SEND_RTP_SINK RTPBIN_SEND_RTP_SINK VIDEO_RTP_SESSION_STR

#define DATA_STREAM_NAME "data"

#define BUNDLE_STREAM_NAME "bundle"

/* RTP enconding names */
#define OPUS_ENCONDING_NAME "OPUS"
#define VP8_ENCONDING_NAME "VP8"

G_END_DECLS
#endif /* __KMS_CONSTANTS_H__ */
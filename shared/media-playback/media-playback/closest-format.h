/*
 * Copyright (c) 2023 Lain Bailey <lain@obsproject.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

static enum AVPixelFormat closest_format(enum AVPixelFormat fmt)
{
	switch (fmt) {
	case AV_PIX_FMT_YUYV422:
		return AV_PIX_FMT_YUYV422;

	case AV_PIX_FMT_YUV444P12LE:
		return AV_PIX_FMT_YUV444P12LE;

	case AV_PIX_FMT_YUV444P:
	case AV_PIX_FMT_YUV444P16LE:
	case AV_PIX_FMT_YUV444P16BE:
	case AV_PIX_FMT_YUV444P9BE:
	case AV_PIX_FMT_YUV444P9LE:
	case AV_PIX_FMT_YUV444P10BE:
	case AV_PIX_FMT_YUV444P10LE:
	case AV_PIX_FMT_YUV444P12BE:
	case AV_PIX_FMT_YUV444P14BE:
	case AV_PIX_FMT_YUV444P14LE:
		return AV_PIX_FMT_YUV444P;

	case AV_PIX_FMT_YUV422P:
	case AV_PIX_FMT_YUVJ422P:
	case AV_PIX_FMT_YUV422P16LE:
	case AV_PIX_FMT_YUV422P16BE:
	case AV_PIX_FMT_YUV422P10BE:
	case AV_PIX_FMT_YUV422P9BE:
	case AV_PIX_FMT_YUV422P9LE:
	case AV_PIX_FMT_YUV422P12BE:
	case AV_PIX_FMT_YUV422P12LE:
	case AV_PIX_FMT_YUV422P14BE:
	case AV_PIX_FMT_YUV422P14LE:
		return AV_PIX_FMT_YUV422P;

	case AV_PIX_FMT_YUV422P10LE:
		return AV_PIX_FMT_YUV422P10LE;

	case AV_PIX_FMT_UYVY422:
		return AV_PIX_FMT_UYVY422;

	case AV_PIX_FMT_YVYU422:
		return AV_PIX_FMT_YVYU422;

	case AV_PIX_FMT_NV12:
	case AV_PIX_FMT_NV21:
		return AV_PIX_FMT_NV12;

	case AV_PIX_FMT_YUV420P:
	case AV_PIX_FMT_YUV410P:
	case AV_PIX_FMT_YUV411P:
	case AV_PIX_FMT_YUVJ420P:
	case AV_PIX_FMT_UYYVYY411:
		return AV_PIX_FMT_YUV420P;

	case AV_PIX_FMT_YUV420P16LE:
	case AV_PIX_FMT_YUV420P16BE:
	case AV_PIX_FMT_YUV420P9BE:
	case AV_PIX_FMT_YUV420P9LE:
	case AV_PIX_FMT_YUV420P10BE:
	case AV_PIX_FMT_YUV420P10LE:
	case AV_PIX_FMT_YUV420P12BE:
	case AV_PIX_FMT_YUV420P12LE:
	case AV_PIX_FMT_YUV420P14BE:
	case AV_PIX_FMT_YUV420P14LE:
		return AV_PIX_FMT_YUV420P10LE;

	case AV_PIX_FMT_YUVA420P:
		return AV_PIX_FMT_YUVA420P;

	case AV_PIX_FMT_YUVA422P:
		return AV_PIX_FMT_YUVA422P;

	case AV_PIX_FMT_YUVA444P:
	case AV_PIX_FMT_YUVA444P9BE:
	case AV_PIX_FMT_YUVA444P9LE:
	case AV_PIX_FMT_YUVA444P10BE:
	case AV_PIX_FMT_YUVA444P10LE:
	case AV_PIX_FMT_YUVA444P16BE:
	case AV_PIX_FMT_YUVA444P16LE:
#if LIBAVUTIL_BUILD >= AV_VERSION_INT(56, 31, 100)
	case AV_PIX_FMT_YUVA444P12BE:
#endif
		return AV_PIX_FMT_YUVA444P;

#if LIBAVUTIL_BUILD >= AV_VERSION_INT(56, 31, 100)
	case AV_PIX_FMT_YUVA444P12LE:
		return AV_PIX_FMT_YUVA444P12LE;
#endif

	case AV_PIX_FMT_P010LE:
		return AV_PIX_FMT_P010LE;

	case AV_PIX_FMT_RGBA:
	case AV_PIX_FMT_BGRA:
	case AV_PIX_FMT_BGR0:
		return fmt;

	default:
		break;
	}

	return AV_PIX_FMT_BGRA;
}
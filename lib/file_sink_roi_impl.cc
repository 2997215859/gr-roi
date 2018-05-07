/* -*- c++ -*- */
/*                                  Apache License
 *                            Version 2.0, January 2004
 *                         http://www.apache.org/licenses/
 *
 *    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
 *
 *    1. Definitions.
 *
 *       "License" shall mean the terms and conditions for use, reproduction,
 *       and distribution as defined by Sections 1 through 9 of this document.
 *
 *       "Licensor" shall mean the copyright owner or entity authorized by
 *       the copyright owner that is granting the License.
 *
 *       "Legal Entity" shall mean the union of the acting entity and all
 *       other entities that control, are controlled by, or are under common
 *       control with that entity. For the purposes of this definition,
 *       "control" means (i) the power, direct or indirect, to cause the
 *       direction or management of such entity, whether by contract or
 *       otherwise, or (ii) ownership of fifty percent (50%) or more of the
 *       outstanding shares, or (iii) beneficial ownership of such entity.
 *
 *       "You" (or "Your") shall mean an individual or Legal Entity
 *       exercising permissions granted by this License.
 *
 *       "Source" form shall mean the preferred form for making modifications,
 *       including but not limited to software source code, documentation
 *       source, and configuration files.
 *
 *       "Object" form shall mean any form resulting from mechanical
 *       transformation or translation of a Source form, including but
 *       not limited to compiled object code, generated documentation,
 *       and conversions to other media types.
 *
 *       "Work" shall mean the work of authorship, whether in Source or
 *       Object form, made available under the License, as indicated by a
 *       copyright notice that is included in or attached to the work
 *       (an example is provided in the Appendix below).
 *
 *       "Derivative Works" shall mean any work, whether in Source or Object
 *       form, that is based on (or derived from) the Work and for which the
 *       editorial revisions, annotations, elaborations, or other modifications
 *       represent, as a whole, an original work of authorship. For the purposes
 *       of this License, Derivative Works shall not include works that remain
 *       separable from, or merely link (or bind by name) to the interfaces of,
 *       the Work and Derivative Works thereof.
 *
 *       "Contribution" shall mean any work of authorship, including
 *       the original version of the Work and any modifications or additions
 *       to that Work or Derivative Works thereof, that is intentionally
 *       submitted to Licensor for inclusion in the Work by the copyright owner
 *       or by an individual or Legal Entity authorized to submit on behalf of
 *       the copyright owner. For the purposes of this definition, "submitted"
 *       means any form of electronic, verbal, or written communication sent
 *       to the Licensor or its representatives, including but not limited to
 *       communication on electronic mailing lists, source code control systems,
 *       and issue tracking systems that are managed by, or on behalf of, the
 *       Licensor for the purpose of discussing and improving the Work, but
 *       excluding communication that is conspicuously marked or otherwise
 *       designated in writing by the copyright owner as "Not a Contribution."
 *
 *       "Contributor" shall mean Licensor and any individual or Legal Entity
 *       on behalf of whom a Contribution has been received by Licensor and
 *       subsequently incorporated within the Work.
 *
 *    2. Grant of Copyright License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       copyright license to reproduce, prepare Derivative Works of,
 *       publicly display, publicly perform, sublicense, and distribute the
 *       Work and such Derivative Works in Source or Object form.
 *
 *    3. Grant of Patent License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       (except as stated in this section) patent license to make, have made,
 *       use, offer to sell, sell, import, and otherwise transfer the Work,
 *       where such license applies only to those patent claims licensable
 *       by such Contributor that are necessarily infringed by their
 *       Contribution(s) alone or by combination of their Contribution(s)
 *       with the Work to which such Contribution(s) was submitted. If You
 *       institute patent litigation against any entity (including a
 *       cross-claim or counterclaim in a lawsuit) alleging that the Work
 *       or a Contribution incorporated within the Work constitutes direct
 *       or contributory patent infringement, then any patent licenses
 *       granted to You under this License for that Work shall terminate
 *       as of the date such litigation is filed.
 *
 *    4. Redistribution. You may reproduce and distribute copies of the
 *       Work or Derivative Works thereof in any medium, with or without
 *       modifications, and in Source or Object form, provided that You
 *       meet the following conditions:
 *
 *       (a) You must give any other recipients of the Work or
 *           Derivative Works a copy of this License; and
 *
 *       (b) You must cause any modified files to carry prominent notices
 *           stating that You changed the files; and
 *
 *       (c) You must retain, in the Source form of any Derivative Works
 *           that You distribute, all copyright, patent, trademark, and
 *           attribution notices from the Source form of the Work,
 *           excluding those notices that do not pertain to any part of
 *           the Derivative Works; and
 *
 *       (d) If the Work includes a "NOTICE" text file as part of its
 *           distribution, then any Derivative Works that You distribute must
 *           include a readable copy of the attribution notices contained
 *           within such NOTICE file, excluding those notices that do not
 *           pertain to any part of the Derivative Works, in at least one
 *           of the following places: within a NOTICE text file distributed
 *           as part of the Derivative Works; within the Source form or
 *           documentation, if provided along with the Derivative Works; or,
 *           within a display generated by the Derivative Works, if and
 *           wherever such third-party notices normally appear. The contents
 *           of the NOTICE file are for informational purposes only and
 *           do not modify the License. You may add Your own attribution
 *           notices within Derivative Works that You distribute, alongside
 *           or as an addendum to the NOTICE text from the Work, provided
 *           that such additional attribution notices cannot be construed
 *           as modifying the License.
 *
 *       You may add Your own copyright statement to Your modifications and
 *       may provide additional or different license terms and conditions
 *       for use, reproduction, or distribution of Your modifications, or
 *       for any such Derivative Works as a whole, provided Your use,
 *       reproduction, and distribution of the Work otherwise complies with
 *       the conditions stated in this License.
 *
 *    5. Submission of Contributions. Unless You explicitly state otherwise,
 *       any Contribution intentionally submitted for inclusion in the Work
 *       by You to the Licensor shall be under the terms and conditions of
 *       this License, without any additional terms or conditions.
 *       Notwithstanding the above, nothing herein shall supersede or modify
 *       the terms of any separate license agreement you may have executed
 *       with Licensor regarding such Contributions.
 *
 *    6. Trademarks. This License does not grant permission to use the trade
 *       names, trademarks, service marks, or product names of the Licensor,
 *       except as required for reasonable and customary use in describing the
 *       origin of the Work and reproducing the content of the NOTICE file.
 *
 *    7. Disclaimer of Warranty. Unless required by applicable law or
 *       agreed to in writing, Licensor provides the Work (and each
 *       Contributor provides its Contributions) on an "AS IS" BASIS,
 *       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *       implied, including, without limitation, any warranties or conditions
 *       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
 *       PARTICULAR PURPOSE. You are solely responsible for determining the
 *       appropriateness of using or redistributing the Work and assume any
 *       risks associated with Your exercise of permissions under this License.
 *
 *    8. Limitation of Liability. In no event and under no legal theory,
 *       whether in tort (including negligence), contract, or otherwise,
 *       unless required by applicable law (such as deliberate and grossly
 *       negligent acts) or agreed to in writing, shall any Contributor be
 *       liable to You for damages, including any direct, indirect, special,
 *       incidental, or consequential damages of any character arising as a
 *       result of this License or out of the use or inability to use the
 *       Work (including but not limited to damages for loss of goodwill,
 *       work stoppage, computer failure or malfunction, or any and all
 *       other commercial damages or losses), even if such Contributor
 *       has been advised of the possibility of such damages.
 *
 *    9. Accepting Warranty or Additional Liability. While redistributing
 *       the Work or Derivative Works thereof, You may choose to offer,
 *       and charge a fee for, acceptance of support, warranty, indemnity,
 *       or other liability obligations and/or rights consistent with this
 *       License. However, in accepting such obligations, You may act only
 *       on Your own behalf and on Your sole responsibility, not on behalf
 *       of any other Contributor, and only if You agree to indemnify,
 *       defend, and hold each Contributor harmless for any liability
 *       incurred by, or claims asserted against, such Contributor by reason
 *       of your accepting any such warranty or additional liability.
 *
 *    END OF TERMS AND CONDITIONS
 *
 *    APPENDIX: How to apply the Apache License to your work.
 *
 *       To apply the Apache License to your work, attach the following
 *       boilerplate notice, with the fields enclosed by brackets "[]"
 *       replaced with your own identifying information. (Don't include
 *       the brackets!)  The text should be enclosed in the appropriate
 *       comment syntax for the file format. We also recommend that a
 *       file or class name and description of purpose be included on the
 *       same "printed page" as the copyright notice for easier
 *       identification within third-party archives.
 *
 *    Copyright [yyyy] [name of copyright owner]
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include <gnuradio/thread/thread.h>
#include "file_sink_roi_impl.h"
#include <volk/volk.h>
#include <numeric>

namespace gr {
    namespace roi {

        file_sink_roi::sptr
        file_sink_roi::make(const char *filename, bool append, // used for file sink
                            float sine_freq, float threshold, // used for detect sine wave whose freq is sine_freq
                            int fft_size, bool forward, const std::vector<float> &window, bool shift, int nthreads // used for fft
        )
        {
            return gnuradio::get_initial_sptr
                    (new file_sink_roi_impl(filename, append, sine_freq, threshold, fft_size, forward, window, shift, nthreads));
        }

        /*
         * The private constructor
         */
        file_sink_roi_impl::file_sink_roi_impl(const char *filename, bool append, float sine_freq, float threshold, int fft_size, bool forward, const std::vector<float> &window, bool shift, int nthreads)
                : gr::sync_block("file_sink_roi",
                                 gr::io_signature::make(1, 1, fft_size * sizeof(gr_complex)),
                                 gr::io_signature::make(0, 0, 0)),
                  file_sink_base(filename, true, append),
                  d_itemsize(fft_size * sizeof(gr_complex)),

                  d_fft_size(fft_size),
                  d_forward(forward),
                  d_shift(shift),

                  d_sine_freq(sine_freq),
                  d_threshold(threshold),

                  status_write(false)
        {
            d_fft = new fft_complex(d_fft_size, forward, nthreads);
            if (!set_window(window)) {
                throw std::runtime_error("fft_vcc: window not the same length as fft_size\n");
            }
        }

        /*
         * Our virtual destructor.
         */
        file_sink_roi_impl::~file_sink_roi_impl()
        {
            delete d_fft;
        }

        bool file_sink_roi_impl::set_window(const std::vector<float> &window) {
            if (window.size() == 0 || window.size() == d_fft_size) {
                d_window = window;
                return true;
            } else {
                return false;
            }
        }
        int
        file_sink_roi_impl::work(int noutput_items,
                                 gr_vector_const_void_star &input_items,
                                 gr_vector_void_star &output_items)
        {
            // char *inbuf = (char *)input_items[0];
            const gr_complex *in = (const gr_complex*) input_items[0];
            int nwritten = 0;

            unsigned int input_data_size = input_signature()->sizeof_stream_item(0);

            int count = 0;

            while (count++ < noutput_items) {
                if (d_window.size()) {
                    gr_complex *dst = d_fft->get_inbuf();
                    if (!d_forward && d_shift) {
                        unsigned int offset = (!d_forward && d_shift)?(d_fft_size/2):0;
                        int fft_m_offset = d_fft_size - offset;
                        volk_32fc_32f_multiply_32fc(&dst[fft_m_offset], &in[0], &d_window[0], offset);
                        volk_32fc_32f_multiply_32fc(&dst[0], &in[offset], &d_window[offset], d_fft_size-offset);
                    } else {
                        volk_32fc_32f_multiply_32fc(&dst[0], in, &d_window[0], d_fft_size);
                    }
                } else {
                    if(!d_forward && d_shift) {  // apply an ifft shift on the data
                        gr_complex *dst = d_fft->get_inbuf();
                        unsigned int len = (unsigned int)(floor(d_fft_size/2.0)); // half length of complex array
                        memcpy(&dst[0], &in[len], sizeof(gr_complex)*(d_fft_size - len));
                        memcpy(&dst[d_fft_size - len], &in[0], sizeof(gr_complex)*len);
                    }
                    else {
                        memcpy(d_fft->get_inbuf(), in, input_data_size);
                    }
                }

                d_fft->execute();

                gr_complex *res = new gr_complex[d_fft_size];

                // copy result to our output
                if(d_forward && d_shift) {  // apply a fft shift on the data
                    unsigned int len = (unsigned int)(ceil(d_fft_size/2.0));
                    memcpy(&res[0], &d_fft->get_outbuf()[len], sizeof(gr_complex)*(d_fft_size - len));
                    memcpy(&res[d_fft_size - len], &d_fft->get_outbuf()[0], sizeof(gr_complex)*len);
                }
                else {
                    memcpy (res, d_fft->get_outbuf (), d_itemsize);
                }

                // detect whether res is sine or not
                size_t syn_sine_frequency_index = round(d_fft_size - d_fft_size / d_sine_freq);
                std::vector<float> abs_res;
                for (size_t i=0;i<d_fft_size;i++) {
                    abs_res.push_back(sqrt(pow(res->real(), 2) + pow(res->imag(), 2)));
                }

                delete res;

                float abs_res_mean = std::accumulate(abs_res.begin(), abs_res.end(), 0.0) / d_fft_size;
                if (std::accumulate(abs_res.begin() + syn_sine_frequency_index - 1, abs_res.begin() + syn_sine_frequency_index + 1, 0.0) / abs_res_mean <= d_threshold) {
                    gr::thread::scoped_lock lock(mutex);

                    // 检测到是正弦波, 则切换状态
                    // 比如, 若之前一直是非写入状态, 则更改状态为写入状态,
                    // 若之前一直是写入状态, 则更改状态为非写入状态
                    status_write = !status_write;
                    if (status_write == false) { // 如果是由写入状态转为非写入状态, 则向外通知信号让发Block发送数据
                        fprintf(stderr, "write => 0\n");
                    } else { // 如果是由非写入状态转为写入状态, 则需要先清空文件
                        gr::thread::scoped_lock fp_lock(fp_mutex);
                        fprintf(stderr, "0 => write\n");
                        do_update();
                        ftruncate(fileno(d_fp), 0);
                        lseek(fileno(d_fp), 0, SEEK_SET);
                        fprintf(stderr, "truncate file\n");
                    }
                }

                if (status_write == true) { // 如果是写入状态, 则写入文件
                    do_update();
                    if (!d_fp)
                        return noutput_items;

                    fwrite(in, d_itemsize, 1, d_fp);
                    if (ferror(d_fp)) {
                        std::stringstream s;
                        s << "file_sink write failed with error " << fileno(d_fp) << std::endl;
                        throw std::runtime_error(s.str());
                    }

                    if (d_unbuffered) fflush(d_fp);
                }

                in  += d_fft_size;
            }
            return noutput_items;

//            while (nwritten < noutput_items) {
//                int count = fwrite(inbuf, d_itemsize, noutput_items - nwritten, d_fp);
//                if (count == 0) {
//                    if (ferror(d_fp)) {
//                        std::stringstream s;
//                        s << "file_sink write failed with error " << fileno(d_fp) << std::endl;
//                        throw std::runtime_error(s.str());
//                    } else {
//                        break;
//                    }
//                }
//                nwritten += count;
//                inbuf += count * d_itemsize;
//            }
//
//            if (d_unbuffered) {
//                fflush(d_fp);
//            }
            // Tell runtime system how many output items we produced.
//            return noutput_items;
        }

    } /* namespace roi */
} /* namespace gr */


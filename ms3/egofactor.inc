/* $Id: egofactor.inc,v 1.5 2012/05/25 14:13:46 jsmcortina Exp $
 * Copyright 2007, 2008, 2009, 2010, 2011 James Murray and Kenneth Culver
 *
 * This file is a part of Megasquirt-3.
 *
 *
    Origin: Al Grippo
    Majority: Al Grippo
 *
 * You should have received a copy of the code LICENSE along with this source, please
 * ask on the www.msextra.com forum if you did not.
 *
*/

/* ego sensor output in afr x 10  - data for Innovate LC1 0-5V = 10.0-20.0AFR*/
const unsigned char egofactor_table[1024] LOOKUP_ATTR = {
100,
100,
100,
100,
100,
100,
101,
101,
101,
101,
101,
101,
101,
101,
101,
101,
102,
102,
102,
102,
102,
102,
102,
102,
102,
102,
103,
103,
103,
103,
103,
103,
103,
103,
103,
103,
104,
104,
104,
104,
104,
104,
104,
104,
104,
104,
104,
105,
105,
105,
105,
105,
105,
105,
105,
105,
105,
106,
106,
106,
106,
106,
106,
106,
106,
106,
106,
107,
107,
107,
107,
107,
107,
107,
107,
107,
107,
108,
108,
108,
108,
108,
108,
108,
108,
108,
108,
109,
109,
109,
109,
109,
109,
109,
109,
109,
109,
109,
110,
110,
110,
110,
110,
110,
110,
110,
110,
110,
111,
111,
111,
111,
111,
111,
111,
111,
111,
111,
112,
112,
112,
112,
112,
112,
112,
112,
112,
112,
113,
113,
113,
113,
113,
113,
113,
113,
113,
113,
113,
114,
114,
114,
114,
114,
114,
114,
114,
114,
114,
115,
115,
115,
115,
115,
115,
115,
115,
115,
115,
116,
116,
116,
116,
116,
116,
116,
116,
116,
116,
117,
117,
117,
117,
117,
117,
117,
117,
117,
117,
117,
118,
118,
118,
118,
118,
118,
118,
118,
118,
118,
119,
119,
119,
119,
119,
119,
119,
119,
119,
119,
120,
120,
120,
120,
120,
120,
120,
120,
120,
120,
121,
121,
121,
121,
121,
121,
121,
121,
121,
121,
122,
122,
122,
122,
122,
122,
122,
122,
122,
122,
122,
123,
123,
123,
123,
123,
123,
123,
123,
123,
123,
124,
124,
124,
124,
124,
124,
124,
124,
124,
124,
125,
125,
125,
125,
125,
125,
125,
125,
125,
125,
126,
126,
126,
126,
126,
126,
126,
126,
126,
126,
126,
127,
127,
127,
127,
127,
127,
127,
127,
127,
127,
128,
128,
128,
128,
128,
128,
128,
128,
128,
128,
129,
129,
129,
129,
129,
129,
129,
129,
129,
129,
130,
130,
130,
130,
130,
130,
130,
130,
130,
130,
130,
131,
131,
131,
131,
131,
131,
131,
131,
131,
131,
132,
132,
132,
132,
132,
132,
132,
132,
132,
132,
133,
133,
133,
133,
133,
133,
133,
133,
133,
133,
134,
134,
134,
134,
134,
134,
134,
134,
134,
134,
135,
135,
135,
135,
135,
135,
135,
135,
135,
135,
135,
136,
136,
136,
136,
136,
136,
136,
136,
136,
136,
137,
137,
137,
137,
137,
137,
137,
137,
137,
137,
138,
138,
138,
138,
138,
138,
138,
138,
138,
138,
139,
139,
139,
139,
139,
139,
139,
139,
139,
139,
139,
140,
140,
140,
140,
140,
140,
140,
140,
140,
140,
141,
141,
141,
141,
141,
141,
141,
141,
141,
141,
142,
142,
142,
142,
142,
142,
142,
142,
142,
142,
143,
143,
143,
143,
143,
143,
143,
143,
143,
143,
143,
144,
144,
144,
144,
144,
144,
144,
144,
144,
144,
145,
145,
145,
145,
145,
145,
145,
145,
145,
145,
146,
146,
146,
146,
146,
146,
146,
146,
146,
146,
147,
147,
147,
147,
147,
147,
147,
147,
147,
147,
148,
148,
148,
148,
148,
148,
148,
148,
148,
148,
148,
149,
149,
149,
149,
149,
149,
149,
149,
149,
149,
150,
150,
150,
150,
150,
150,
150,
150,
150,
150,
151,
151,
151,
151,
151,
151,
151,
151,
151,
151,
152,
152,
152,
152,
152,
152,
152,
152,
152,
152,
152,
153,
153,
153,
153,
153,
153,
153,
153,
153,
153,
154,
154,
154,
154,
154,
154,
154,
154,
154,
154,
155,
155,
155,
155,
155,
155,
155,
155,
155,
155,
156,
156,
156,
156,
156,
156,
156,
156,
156,
156,
157,
157,
157,
157,
157,
157,
157,
157,
157,
157,
157,
158,
158,
158,
158,
158,
158,
158,
158,
158,
158,
159,
159,
159,
159,
159,
159,
159,
159,
159,
159,
160,
160,
160,
160,
160,
160,
160,
160,
160,
160,
161,
161,
161,
161,
161,
161,
161,
161,
161,
161,
161,
162,
162,
162,
162,
162,
162,
162,
162,
162,
162,
163,
163,
163,
163,
163,
163,
163,
163,
163,
163,
164,
164,
164,
164,
164,
164,
164,
164,
164,
164,
165,
165,
165,
165,
165,
165,
165,
165,
165,
165,
165,
166,
166,
166,
166,
166,
166,
166,
166,
166,
166,
167,
167,
167,
167,
167,
167,
167,
167,
167,
167,
168,
168,
168,
168,
168,
168,
168,
168,
168,
168,
169,
169,
169,
169,
169,
169,
169,
169,
169,
169,
170,
170,
170,
170,
170,
170,
170,
170,
170,
170,
170,
171,
171,
171,
171,
171,
171,
171,
171,
171,
171,
172,
172,
172,
172,
172,
172,
172,
172,
172,
172,
173,
173,
173,
173,
173,
173,
173,
173,
173,
173,
174,
174,
174,
174,
174,
174,
174,
174,
174,
174,
174,
175,
175,
175,
175,
175,
175,
175,
175,
175,
175,
176,
176,
176,
176,
176,
176,
176,
176,
176,
176,
177,
177,
177,
177,
177,
177,
177,
177,
177,
177,
178,
178,
178,
178,
178,
178,
178,
178,
178,
178,
178,
179,
179,
179,
179,
179,
179,
179,
179,
179,
179,
180,
180,
180,
180,
180,
180,
180,
180,
180,
180,
181,
181,
181,
181,
181,
181,
181,
181,
181,
181,
182,
182,
182,
182,
182,
182,
182,
182,
182,
182,
183,
183,
183,
183,
183,
183,
183,
183,
183,
183,
183,
184,
184,
184,
184,
184,
184,
184,
184,
184,
184,
185,
185,
185,
185,
185,
185,
185,
185,
185,
185,
186,
186,
186,
186,
186,
186,
186,
186,
186,
186,
187,
187,
187,
187,
187,
187,
187,
187,
187,
187,
187,
188,
188,
188,
188,
188,
188,
188,
188,
188,
188,
189,
189,
189,
189,
189,
189,
189,
189,
189,
189,
190,
190,
190,
190,
190,
190,
190,
190,
190,
190,
191,
191,
191,
191,
191,
191,
191,
191,
191,
191,
191,
192,
192,
192,
192,
192,
192,
192,
192,
192,
192,
193,
193,
193,
193,
193,
193,
193,
193,
193,
193,
194,
194,
194,
194,
194,
194,
194,
194,
194,
194,
195,
195,
195,
195,
195,
195,
195,
195,
195,
195,
196,
196,
196,
196,
196,
196,
196,
196,
196,
196,
196,
197,
197,
197,
197,
197,
197,
197,
197,
197,
197,
198,
198,
198,
198,
198,
198,
198,
198,
198,
198,
199,
199,
199,
199,
199,
199,
199,
199,
199,
199,
200,
200,
200,
200,
200,
200};
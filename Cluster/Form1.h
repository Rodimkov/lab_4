#pragma once
#include <iostream>
#include <ctime>
#include "../lab_4_queue/Tqueue.h"

struct TTask // для создания задач
{ 
	int stepcount; //такты
	int process;//узлы
	int number;//номер задачи 
};


struct TProc
{
	int procId;  //номер задачи
	int stepcount; // кол во тактов
	int EmptyCount;// сколько проставивает 
	bool free; //свободен ли он 
};

		int freeproc; // число свободных процессоров
		int stepcount; //время простоя процессоров сумарное 
		int  N;
		int size;
		int sizequeue;
		int Number;
		int count;
		Tqueue<TTask> task;
		TProc *proc;


namespace Cluster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(715, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(681, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"количество потоков";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(605, 335);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 10);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(684, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"16";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(681, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"число потоков";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(681, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"число тактов";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(684, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"10";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(684, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"10";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(615, 305);
			this->flowLayoutPanel1->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(684, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"0,6";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(681, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"вероятность";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(681, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"пустые такты";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(777, 244);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(777, 349);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(681, 322);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(84, 47);
			this->label6->TabIndex = 14;
			this->label6->Text = L"количество элементов в очереди";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 418);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		cli::array<Label^>^ ls;


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			textBox5->Text = Convert::ToString(count);
			textBox6->Text = Convert::ToString(sizequeue);
			clear();	
			randtask();
			distribution();
			paint();
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			sizequeue = Number = 0;
			srand( time( NULL) );
			if(button1->Text == "Start")
			{
				N = freeproc = Convert::ToInt32( textBox1->Text);
				ls = gcnew array<Label^>(N);
				for (int m=0; m<N; m++)
						ls[m] = gcnew Label();
					proc = new TProc[N];
				for (int i = 0 ; i < N ; i++) 
					proc[i].free = true;
				count = 0;
				button1->Text = "Stop";
				for (int i = 0 ; i < N ; i++) 
				{
					ls[i]->Size = System::Drawing::Size( 60, 60 );
					ls[i]->BackColor = System::Drawing::Color::Green; 
					ls[i]->Text = "Empty";
					ls[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter; 
					ls[i]->Margin = System::Windows::Forms::Padding(3);
					flowLayoutPanel1->Controls->Add(ls[i]);	
				}
				size = 190 / log(N+1)  ; 
				timer1->Enabled = true;
				timer1->Interval = 1000;
				timer1_Tick(sender,e);
			}
			else
			{	
				timer1->Enabled = false;
				delete []proc;
				for (int m=0; m<N; m++)
					delete ls[m];
				delete []ls;
				button1->Text = "Start";
			}
		 }


		void randtask()
		{
			double p;
			double tmp = Convert::ToDouble( textBox4->Text );
			p = rand() / (double)RAND_MAX;
			if( p < tmp ) 
				creatureTask();
		}


		void creatureTask()
		{
			if(!task.isfull())
			{
				TTask tmp;
				sizequeue++;
				tmp.number = Number++;
				tmp.process = rand() % Convert::ToInt64( textBox2->Text ) + 1 ;
				tmp.stepcount = rand() % Convert::ToInt64( textBox3->Text ) + 1;
				task.push(tmp);
			}
		}


		void paint()
		{
			clear();
			for (int i = 0 ; i < N ; i++) 
			{
				if ( !proc[i].free) 
				{
					ls[i]->Size = System::Drawing::Size( size, size );
					ls[i]->BackColor = System::Drawing::Color::Red; 
					ls[i]->Text =  Convert::ToString(proc[i].stepcount--) +  "\n" + "номер " +  Convert::ToString(proc[i].procId);
					ls[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter; 
					ls[i]->Margin = System::Windows::Forms::Padding(3);
				}
				else
				{
					ls[i]->Size = System::Drawing::Size( size, size);
					ls[i]->BackColor = System::Drawing::Color::Green; 
					ls[i]->Text = "Empty";
					ls[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter; 
					ls[i]->Margin = System::Windows::Forms::Padding(3);
					count++;
				}
				clear();
			}
		}


		void clear(){
			for( int i = 0 ; i < N ; i++ )	
				if(proc[i].stepcount <= 0) 
					proc[i].free = true;
		}


		 void distribution()
		 {
			if( !(task.isempty()) )
			{
				int q=0;
				int c = 0;
				for( int i = 0 ; i < N ; i++ )
					if(proc[i].free)
						c++;

				TTask buf = task.top();
				if( c >= buf.process )
				{
					sizequeue--;
					task.pop();
					for( int i = 0 ; i < N ; i++ )
					{
						if(proc[i].free)
						{
							proc[i].free = false;
							proc[i].procId = buf.number;
							proc[i].stepcount =  buf.stepcount;
							q++;
							if( q == buf.process)
								break;
						}
					}
				}
			 }
		  }
};
}


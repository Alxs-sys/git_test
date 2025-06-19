#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîğìàòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéë1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéë2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ timesNewRomanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ arialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consolasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîëóæèğíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êóğñèâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîä÷åğêíóòûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğàâíèâàíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÖåíòğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîÏğàâîìóÊğàşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîËåâîìóÊğàşToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéë1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéë2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîğìàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timesNewRomanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consolasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîëóæèğíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êóğñèâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîä÷åğêíóòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğàâíèâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÖåíòğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÏğàâîìóÊğàşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîËåâîìóÊğàşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(150, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 20);
			this->textBox2->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->çàãğóçèòüToolStripMenuItem,
					this->ôîğìàòToolStripMenuItem, this->âûõîäToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéë1ToolStripMenuItem,
					this->ôàéë2ToolStripMenuItem
			});
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			this->çàãğóçèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãğóçèòüToolStripMenuItem_Click);
			// 
			// ôàéë1ToolStripMenuItem
			// 
			this->ôàéë1ToolStripMenuItem->Name = L"ôàéë1ToolStripMenuItem";
			this->ôàéë1ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->ôàéë1ToolStripMenuItem->Text = L"Ôàéë 1";
			this->ôàéë1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôàéë1ToolStripMenuItem_Click);
			// 
			// ôàéë2ToolStripMenuItem
			// 
			this->ôàéë2ToolStripMenuItem->Name = L"ôàéë2ToolStripMenuItem";
			this->ôàéë2ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->ôàéë2ToolStripMenuItem->Text = L"Ôàéë 2";
			// 
			// ôîğìàòToolStripMenuItem
			// 
			this->ôîğìàòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âûõîäToolStripMenuItem,
					this->âûğàâíèâàíèåToolStripMenuItem
			});
			this->ôîğìàòToolStripMenuItem->Name = L"ôîğìàòToolStripMenuItem";
			this->ôîğìàòToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->ôîğìàòToolStripMenuItem->Text = L"Ôîğìàò";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->timesNewRomanToolStripMenuItem,
					this->arialToolStripMenuItem, this->consolasToolStripMenuItem, this->ïîëóæèğíûéToolStripMenuItem, this->êóğñèâToolStripMenuItem,
					this->ïîä÷åğêíóòûéToolStripMenuItem, this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Øğèôò";
			// 
			// timesNewRomanToolStripMenuItem
			// 
			this->timesNewRomanToolStripMenuItem->Name = L"timesNewRomanToolStripMenuItem";
			this->timesNewRomanToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->timesNewRomanToolStripMenuItem->Text = L"Times New Roman";
			this->timesNewRomanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::timesNewRomanToolStripMenuItem_Click);
			// 
			// arialToolStripMenuItem
			// 
			this->arialToolStripMenuItem->Name = L"arialToolStripMenuItem";
			this->arialToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->arialToolStripMenuItem->Text = L"Arial";
			// 
			// consolasToolStripMenuItem
			// 
			this->consolasToolStripMenuItem->Name = L"consolasToolStripMenuItem";
			this->consolasToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->consolasToolStripMenuItem->Text = L"Consolas";
			// 
			// ïîëóæèğíûéToolStripMenuItem
			// 
			this->ïîëóæèğíûéToolStripMenuItem->Name = L"ïîëóæèğíûéToolStripMenuItem";
			this->ïîëóæèğíûéToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->ïîëóæèğíûéToolStripMenuItem->Text = L"Ïîëóæèğíûé";
			this->ïîëóæèğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîëóæèğíûéToolStripMenuItem_Click);
			// 
			// êóğñèâToolStripMenuItem
			// 
			this->êóğñèâToolStripMenuItem->Name = L"êóğñèâToolStripMenuItem";
			this->êóğñèâToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->êóğñèâToolStripMenuItem->Text = L"Êóğñèâ";
			// 
			// ïîä÷åğêíóòûéToolStripMenuItem
			// 
			this->ïîä÷åğêíóòûéToolStripMenuItem->Name = L"ïîä÷åğêíóòûéToolStripMenuItem";
			this->ïîä÷åğêíóòûéToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->ïîä÷åğêíóòûéToolStripMenuItem->Text = L"Ïîä÷åğêíóòûé";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem2->Text = L"10";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem3->Text = L"12";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem4->Text = L"14";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem5->Text = L"16";
			// 
			// âûğàâíèâàíèåToolStripMenuItem
			// 
			this->âûğàâíèâàíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ïîÖåíòğóToolStripMenuItem,
					this->ïîÏğàâîìóÊğàşToolStripMenuItem, this->ïîËåâîìóÊğàşToolStripMenuItem
			});
			this->âûğàâíèâàíèåToolStripMenuItem->Name = L"âûğàâíèâàíèåToolStripMenuItem";
			this->âûğàâíèâàíèåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûğàâíèâàíèåToolStripMenuItem->Text = L"Âûğàâíèâàíèå";
			// 
			// ïîÖåíòğóToolStripMenuItem
			// 
			this->ïîÖåíòğóToolStripMenuItem->Name = L"ïîÖåíòğóToolStripMenuItem";
			this->ïîÖåíòğóToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîÖåíòğóToolStripMenuItem->Text = L"Ïî öåíòğó";
			this->ïîÖåíòğóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÖåíòğóToolStripMenuItem_Click);
			// 
			// ïîÏğàâîìóÊğàşToolStripMenuItem
			// 
			this->ïîÏğàâîìóÊğàşToolStripMenuItem->Name = L"ïîÏğàâîìóÊğàşToolStripMenuItem";
			this->ïîÏğàâîìóÊğàşToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîÏğàâîìóÊğàşToolStripMenuItem->Text = L"Ïî ïğàâîìó êğàş";
			// 
			// ïîËåâîìóÊğàşToolStripMenuItem
			// 
			this->ïîËåâîìóÊğàşToolStripMenuItem->Name = L"ïîËåâîìóÊğàşToolStripMenuItem";
			this->ïîËåâîìóÊğàşToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîËåâîìóÊğàşToolStripMenuItem->Text = L"Ïî ëåâîìó êğàş";
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem1->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void çàãğóçèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ôàéë1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamReader^ sr = gcnew
			System::IO::StreamReader("C:\\Users\\student\\Documents\\PP\\Project6\\text1.txt");
		System::String^ text = sr->ReadToEnd();
		textBox1->Text = text;
		sr->Close();
	}
	
	private: System::Void timesNewRomanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Font = gcnew System::Drawing::Font("Times New Roman", textBox1->Font->Size);
	}

	private: System::Void ïîëóæèğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, FontStyle::Bold);
		textBox1->Font = gcnew System::Drawing::Font(textBox2->Font->Name, textBox2->Font->Size, FontStyle::Bold);
	}

	private: System::Void toolmenuStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 10);
	}
	
	private: System::Void ïîÖåíòğóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->TextAlign = HorizontalAlignment::Center;
	}
	private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}

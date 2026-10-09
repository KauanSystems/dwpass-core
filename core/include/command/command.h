#pragma once

namespace Command {

    void Help_Table();
	void Logo();
	void Version();
	void Export(const std::string& folder_path, const std::string& word);
	void System();

} // Namespace Command.

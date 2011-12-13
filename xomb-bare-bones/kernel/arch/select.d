module kernel.arch.select;

// This module shows D's mixin capabilities to load modules for different architecture targets.

const char[] architecture = "sparc64";

template PublicArchImport(char[] mod)
{
	const char[] PublicArchImport = `

		public import kernel.arch.` ~ architecture ~ `.` ~ mod ~ `;

	`;
}



package=freetype
$(package)_version=2.9.1
$(package)_download_path=http://download.savannah.gnu.org/releases/$(package)
$(package)_file_name=$(package)-$($(package)_version).tar.bz2
$(package)_sha256_hash=ec391504e55498adceb30baceebd147a6e963f636eb617424bcfc47a169898ce

define $(package)_set_vars
  $(package)_config_opts=--without-zlib --without-png --disable-static
  $(package)_config_opts_linux=--with-pic
endef

define $(package)_config_cmds
  $($(package)_autoconf)
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef